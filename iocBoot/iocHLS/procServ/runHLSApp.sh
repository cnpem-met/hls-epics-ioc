#!/bin/bash

cd /home/HLS/Apps/HLS-EpicsApp/iocBoot/iocHLS && procServ -n "HLS Daemon" -L ./procServ/hls-procserver.log -p ./procServ/PIDinfo --logstamp --timefmt "[%c] " -i ^D^C 20000 ./iocHLS.cmd 
