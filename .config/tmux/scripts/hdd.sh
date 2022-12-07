#!/bin/bash
################
# Variables
################
PROG=${BASH_SOURCE[0]}

################
# Functions
################
HardDrivePath() {
    if [ $I3HOST = "dagoth" ]; then
        echo -e "/dev/nvme0n1p3"
    else
        echo -e "/dev/sda2"
    fi
}

################
# Main
################
HardDrivePath
