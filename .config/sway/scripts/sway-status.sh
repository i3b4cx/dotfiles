#!/bin/bash

function status_output {
    # Print CPU
    cpu=$(~/.config/sway/scripts/usage.sh -c)
    # Print Memory
    mem=$(~/.config/sway/scripts/usage.sh -m)
    # Print date
    now=$(date +'%Y-%m-%d %l:%M %p')
    echo "CPU: ${cpu}% | MEM: ${mem}% | ${now}"
}

while status_output;
do
    sleep 1;
done
