#!/bin/bash

echo "This script assumes an arch-based install with pacman exists and that some necessary basic setup has already been addressed."
echo "5 seconds to cancel ('^C') before launching script:"
sleep 5

echo "Updating pre-existing packages:"
sudo pacman -Syu

aur-packages="sddm-git rofi-wayland-git code-minimap"
browsers="firefox qutebrowser"
development="clang npm gcc g++"
editors="vim neovim wl-clipboard"
terminals="alacritty"
utilities="btop bat exa tmux neofetch ranger mpv mpd imv ncmpcpp zsh git"
wm="sway swaylock swaybg swayidle mako"

echo "Installing new packages:"
sudo pacman -Sy $browsers $editors $terminals $utilities $wm

echo "Installing aur packages:"
yay -Sy $aur-packages

echo "Installing JetBrains Mono font:"
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/JetBrains/JetBrainsMono/master/install_manual.sh)"
