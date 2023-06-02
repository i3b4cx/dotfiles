#!/bin/bash

if [[ $UID != 0 ]]; then
    echo "Please run this script with sudo."
    echo "sudo $0 $*"
    exit 1
fi

pacman -Syu

terminals = "alacritty"
aur-packages = "sddm-git rofi-wayland-git"
wm = "sway swaylock swaybg swayidle mako"
editors = "vim nvim"
utilities = "btop tmux neofetch clang ranger mpv mpd imv ncmpcpp"
browsers = "firefox qutebrowser"

pacman -Sy $terminals $wm $editors $utilities $browsers

yay -Sy $aur-packages
