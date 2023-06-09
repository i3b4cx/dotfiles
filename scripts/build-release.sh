#!/bin/bash
if [[ ! -d build ]];
then
    mkdir build
    cd build
    bash ../scripts/configure-local-release
    make -j8
else
    cd build
    make -j8
fi
