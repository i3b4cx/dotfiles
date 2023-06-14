#!/bin/bash

# change theme if valid
case $1 in
kanagawa|kanagawa-wave|kanagawa-dragon|kanagawa-lotus|horizon|gruvbox|nord)
    sed -i.bak -e "s/.*colorscheme.*/vim.cmd [[colorscheme $1]]/g" ~/.config/nvim/lua/core/options.lua
    sed -i.bak -e "s/.*include.*/include $1.conf/g" ~/.config/kitty/kitty.conf
    ;;
*)
    echo "invalid theme."
    ;;
esac
