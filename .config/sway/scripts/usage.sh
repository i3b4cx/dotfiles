#!/bin/bash

function cpu_usage {
    # Grab the CPU idle percentage
    idle=$(mpstat 1 1 | awk 'FNR == 5 {print $12}')

    # Convert idle percentage to total usage
    usage=$(echo "scale=0; (100 - $idle) / 1" | bc)

    echo "${usage}"
}


function mem_usage {
    # Grab the free memory
    freeMem=$(free | awk 'FNR == 2 {print $7}')

    # Grab the total memory
    totalMem=$(free | awk 'FNR == 2 {print $2}')

    # Calculate usage
    memUsage=$(echo "scale=5; result=($totalMem - $freeMem) / $totalMem * 100; scale=0; result/1" | bc)

    echo "${memUsage}"
}

while getopts "cm" option;
do
    case $option in
        c)
            cpu_usage
            ;;
        m)
            mem_usage
            ;;
    esac
done
