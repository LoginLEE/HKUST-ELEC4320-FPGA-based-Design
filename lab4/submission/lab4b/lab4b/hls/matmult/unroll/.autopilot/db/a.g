#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/cljchanac/Documents/lab4b/hls/matmult/unroll/.autopilot/db/a.g.bc ${1+"$@"}
