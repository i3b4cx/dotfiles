#!/bin/bash

theme="$1"

sed -i.bak -e "s/.*colorscheme.*/vim.cmd [[colorscheme $theme]]/g" ~/.config/nvim/lua/core/config.lua

sed -i.bak -e "s/.*themes\/.*/- ~\/.config\/alacritty\/themes\/$theme.yaml/g" ~/.config/alacritty/alacritty.yml

sed -i.bak -e "s/color_theme = \".*\"/color_theme = \"$theme\"/g" ~/.config/btop/btop.conf
