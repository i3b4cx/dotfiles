#!/bin/bash

# Source SDK
source $(tmux show-option -gqv "@tplugSdk")

# Get Hard Drive
DRIVE=$(tmuxGetOption "@freehdd_drive")
OUTPUT=$(df -h | grep "$DRIVE" | awk '{print $4}')

# Set tmux variable for use
tmuxSetOption "@hddWidget" $OUTPUT
