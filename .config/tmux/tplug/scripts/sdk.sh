#!/bin/bash

# Retrieve SDK directory
CURRENT_DIR=$(tmux show-option -gqv "@tplugPath")

# Source SDK
source "$CURRENT_DIR/scripts/tmuxwrappers.sh"
source "$CURRENT_DIR/scripts/util.sh"
