#!/bin/bash

list="kanagawa kanagawa-wave kanagawa-dragon kanagawa-lotus horizon"

contains() {
    [[ $1 =~ (^|[[:space:]])$2($|[[:space:]]) ]] && exit(0) || exit(1)
}

if [ contains $list $1 ]; then
    sed -i.bak -e "s/.*colorscheme.*/vim.cmd [[colorscheme $theme]]/g" ~/.config/nvim/lua/core/options.lua
    sed -i.bak -e "s/.*include.*/include $1.conf/g" ~/.config/kitty/kitty.conf
else
    echo "invalid theme."
fi
