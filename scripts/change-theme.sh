#!/bin/bash

list=""
theme=$1

case $theme in
kanagawa|kanagawa-wave|kanagawa-dragon|kanagawa-lotus|horizon)
    sed -i.bak -e "s/.*colorscheme.*/vim.cmd [[colorscheme $theme]]/g" ~/.config/nvim/lua/core/options.lua
    sed -i.bak -e "s/.*include.*/include $1.conf/g" ~/.config/kitty/kitty.conf
    ;;
*)
    echo "invalid theme."
    ;;
esac
