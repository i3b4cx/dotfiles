#!/bin/bash

# Retrieve Tplug Path and Source Wrappers
TPLUG_PATH=$(tmux show-option -gqv "@tplugPath")
source "$TPLUG_PATH/scripts/tmuxwrappers.sh"

# Check if debugging is on
DEBUG=$(tmuxGetOption "@tplugDebug" "false")

# Log Utility Function
# Prints to log file directory in tplug directory
tpluglog() {
    if [ "$DEBUG" != "true" ]; then
        return 0
    fi

    module=$1
    message=$2

    timestamp=$(date +"%b %d %Y %H:%M:%S")
    echo "$timestamp [$module] - $message" >> \
        "$TPLUG_PATH/$module.log"
}
