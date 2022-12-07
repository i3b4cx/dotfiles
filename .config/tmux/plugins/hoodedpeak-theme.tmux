#!/bin/bash
#################
### THEME 2
### HOODED PEAK
##################

# Source SDK
source $(tmux show-option -gqv "@tplugSdk")

# Custom Colors
black="#1d1f21"
yellow="#e5c07b"
blue="#61afef"
white="#c5c8c6"
dark_white="#aab2bf"
green="#086809"
visual_grey="#3e4452"
comment_grey="#5c6370"
lighttan="#a89984"
darkblack="282828"
brown="#ebdbb2"
red="#cc241d"

# Default Time/Date Formats
time_format=%R
date_format=%D

# Global Status
tmuxSetOption "status" "on"
tmuxSetOption "status-justify" "left"
tmuxSetOption "status-attr" "none"
tmuxSetOption "status-left-attr" "none"

# Status Bar
tmuxSetOption "status-left-length" "100"
tmuxSetOption "status-right-length" "100"
tmuxSetOption "status-right-attr" "none"
tmuxSetOption "status-bg" "$black"
tmuxSetOption "status-fg" "$white"

# Message bar (Ctrl + b)
tmuxSetOption "message-bg" "$black"
tmuxSetOption "message-fg" "$white"
tmuxSetOption "message-command-bg" "$black"
tmuxSetOption "message-command-fg" "$white"

# Window Status
tmuxSetWindowOption "window-status-bg" "$black"
tmuxSetWindowOption "window-status-fg" "$black"
tmuxSetWindowOption "window-status-attr" "none"
tmuxSetWindowOption "window-status-activity-bg" "$black"
tmuxSetWindowOption "window-status-activity-fg" "$black"
tmuxSetWindowOption "window-status-activity-attr" "none"
tmuxSetWindowOption "window-status-separator" ""
tmuxSetOption "window-style" "fg=$comment_grey"
tmuxSetOption "window-active-style" "fg=$white"

# Pane
tmuxSetOption "display-panes-active-colour" "$yellow"
tmuxSetOption "display-panes-colour" "$blue"
tmuxSetOption "pane-active-border-style" "bg=$black,fg=$lighttan"
tmuxSetOption "pane-border-style" "bg=$black,fg=$visual_grey"

# Highlight colors
tmuxSetOption "@prefix_highlight_fg" "$black"
tmuxSetOption "@prefix_highlight_bg" "$lighttan"
tmuxSetOption "@prefix_highlight_copy_mode_attr" "fg=$black,bg=$lighttan"
tmuxSetOption "@prefix_highlight_output_prefix" "  "

# Widgets
hddWidget=$(tmuxGetOption "@hddWidget")

# Right Status Bar
tmuxSetOption "status-right" "#[fg=$visual_grey,bg=$black]#[fg=$visual_grey,bg=$visual_grey]#[fg=$dark_white,bg=$visual_grey,nobold,nounderscore,noitalics]${hddWidget} #[fg=$lighttan,bg=$visual_grey,nobold,nounderscore,noitalics]#[fg=$black,bg=$lighttan,bold] #h "

# Left Status Bar
tmuxSetOption "status-left" "#[fg=$black,bg=$lighttan,bold] #S #{prefix_highlight}#[fg=$lighttan,bg=$black,nobold,nounderscore,noitalics]"

# Window Status
tmuxSetOption "window-status-format" "#[fg=$black,bg=$black,nobold,nounderscore,noitalics]#[fg=$white,bg=$black] #I  #W #[fg=$black,bg=$black,nobold,nounderscore,noitalics]"

# Window Status Current
tmuxSetOption "window-status-current-format" "#[fg=$black,bg=$visual_grey,nobold,nounderscore,noitalics]#[fg=$white,bg=$visual_grey,nobold] #I  #W #[fg=$visual_grey,bg=$black,nobold,nounderscore,noitalics]"
