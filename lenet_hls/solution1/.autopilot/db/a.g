#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet/lenet_hls/solution1/.autopilot/db/a.g.bc ${1+"$@"}
