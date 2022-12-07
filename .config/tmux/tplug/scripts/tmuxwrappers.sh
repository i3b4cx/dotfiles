#!/bin/sh
##########
# tmux.sh
# Wrappers for setting tmux option values
##########

# Get wrapper to retrieve tmux options
# $1 - tmux option to retrieve
# $2 - value passed in that is used when no option is set
tmuxGetOption() {
    local option=$1
    local defaultValue=$2
    local optionValue="$(tmux show-option -gqv "$option")"

    if [[ -z "$optionValue" ]]; then
        echo "$defaultValue"
    else
        echo "$optionValue"
    fi
}

# Set wrapper to set tmux options
# $1 - tmux option to set
# $2 - value to set the option
tmuxSetOption() {
    local option=$1
    local value=$2
    tmux set-option -gq "$option" "$value"
}

# Set wrapper to set tmux window options
# $1 - tmux window option to set
# $2 - value to set the option
tmuxSetWindowOption() {
    local option=$1
    local value=$2
    tmux set-window-option -gq "$option" "$value"
}
