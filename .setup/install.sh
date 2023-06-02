#!/bin/bash

if [[ $UID != 0 ]]; then
    echo "Please run this script with sudo."
    echo "sudo $0 $*"
    exit 1
fi

pacman -Syu

aur-packages = "sddm-git rofi-wayland-git"
browsers = "firefox qutebrowser"
development = "clang gcc g++"
editors = "vim nvim"
terminals = "alacritty"
utilities = "btop bat tmux neofetch ranger mpv mpd imv ncmpcpp zsh git"
wm = "sway swaylock swaybg swayidle mako"

pacman -Sy $browsers $editors $terminals $utilities $wm

yay -Sy $aur-packages

/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/JetBrains/JetBrainsMono/master/install_manual.sh)"
