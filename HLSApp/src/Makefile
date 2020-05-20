TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

LIBRARY_IOC += HLSSupport

HLSSupport_LIBS += $(EPICS_BASE_IOC_LIBS)

#=============================
# Build the IOC application

PROD_IOC = HLS
# HLS.dbd will be created and installed
DBD += HLS.dbd seqHLS.dbd

# HLS.dbd will be made up from these files:
HLS_DBD += base.dbd
HLS_DBD += stream.dbd
HLS_DBD += drvAsynSerialPort.dbd
HLS_DBD += asyn.dbd
#HLS_DBD += sscan.dbd
#HLS_DBD += sCalcoutRecord.dbd
HLS_DBD += calc.dbd
HLS_DBD += seqHLS.dbd

###seqHLS_SNCFLAGS += +r

DB_INSTALL += $(ASYN)/db/asynRecord.db
#DB_INSTALL += $(TOP)/HLSSup/initRack.vdb

# Include dbd files from all support applications:
#HLS_DBD += xxx.dbd

# Add all the support libraries needed by this IOC
#HLS_LIBS += xxx

# HLS_registerRecordDeviceDriver.cpp derives from HLS.dbd
HLS_SRCS += HLS_registerRecordDeviceDriver.cpp

###HLSSupport_SRCS += seqHLS.stt
###HLSSupport_LIBS += seq pv

#HLS_SRCS += seqHLS.stt

# Build the main IOC entry point on workstation OSs.
HLS_SRCS_DEFAULT += HLSMain.cpp
HLS_SRCS_vxWorks += -nil-

# Add support from base/src/vxWorks if needed
#HLS_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

HLS_LIBS += HLSSupport

seqHLS_SNCFLAGS += +r
HLS_DBD += seqHLS.dbd
HLSSupport_SRCS += seqHLS.stt
HLSSupport_LIBS += seq pv
HLS_LIBS += seq pv

# Finally link to the EPICS Base libraries

HLS_LIBS += stream
HLS_LIBS += asyn
HLS_LIBS += calc
#HLS_LIBS += seq pv
HLS_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

