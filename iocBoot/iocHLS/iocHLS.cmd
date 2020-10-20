#!../../bin/linux-x86_64/HLS

## You may have to change HLS-Test to something else
## everywhere it appears in this file

## Set up environment 
< envPaths
epicsEnvSet "STREAM_PROTOCOL_PATH" "$(TOP)/db"

############################################################################### 
## Allow PV name prefixes and serial port name to be set from the environment 
epicsEnvSet "P" "$(P=hls)"
epicsEnvSet "TTY" "$(TTY=/dev/ttyUSB0)" 

############################################################################### 
## Register all support components
cd "${TOP}"
dbLoadDatabase "dbd/HLS.dbd"
HLS_registerRecordDeviceDriver pdbbase

############################################################################### 
## Set up ASYN ports 
## drvAsynSerialPortConfigure port ipInfo priority noAutoconnect noProcessEos 
drvAsynSerialPortConfigure("L0","$(TTY)",0,0,1) 
asynSetOption("L0", -1, "baud", "115200") 
asynSetOption("L0", -1, "bits", "8") 
asynSetOption("L0", -1, "parity", "none") 
asynSetOption("L0", -1, "stop", "1") 
asynSetOption("L0", -1, "clocal", "N") 
asynSetOption("L0", -1, "crtscts", "N") 
##asynOctetSetInputEos("L0", -1, "\n") 
##asynOctetSetOutputEos("L0", -1, "\n") 

asynSetTraceIOMask("L0",0,2) 
asynSetTraceMask("L0",0,9)
##asynSetTraceIOMask("L0",-1,0x2) 
##asynSetTraceMask("L0",-1,0x9)

############################################################################### 
## Load record instances
## dbLoadRecords("db/initRack.vdb")
dbLoadRecords("db/devHLS.db","P=hls,PORT=L0,A=0")
dbLoadRecords("db/asynRecord.db","P=HLS,R=Test,PORT=L0,ADDR=-1,IMAX=0,OMAX=0")

cd "${TOP}/iocBoot/${IOC}"
iocInit

## Start any sequence programs
#seq sncxxx,"user=rodrigoneto:rodrigoneto"
seq seqHLS
epicsThreadSleep(5)
dbpf cmd 1
epicsThreadSleep(5)
dbpf cmd 2
