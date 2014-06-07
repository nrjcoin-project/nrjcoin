#!/bin/sh

cpucount=$(cat /proc/cpuinfo | grep processor | wc -l)


kill -9 $(ps opid= -C nrjcoind)
cd ~/nrjcoin/src
#make -f makefile.unix clean
make -j$cpucount -f makefile.unix
./nrjcoind
