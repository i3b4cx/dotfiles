#!/bin/bash

case "$(uname)" in
# linux system
"Linux")
    # check if distro is arch or a derivative
    if [ ! -x "$(command -v pacman)" ]; then
        echo "this installer only supports arch and it's derivatives."
        exit 1
    fi

    # install git if not installed
    if [ ! -x "$(command -v git)" ]; then
        echo "installing git"
        sudo pacman -S --needed git
    fi

    # clone dots
	if [ ! -d ~/.dotfiles ]; then
		echo "cloning dots"
		git clone https://github.com/i3b4cx/dotfiles.git ~/.dotfiles
	fi

    sudo pacman -Syu
    sudo pacman -S --needed git base-devel
    git clone https://aur.archlinux.org/yay.git ~/yay
    cd ~/yay
    makepkg -si

    aur="betterlockscreen gotop"
    browsers="firefox"
    development="clang npm gcc g++ valgrind gdb apitrace"
    editors="neovim"
    terminals="kitty"
    utilities="neofetch rofi networkmanager dunst nitrogen htop tmux picom mpd ncmpcpp lsof polybar cmatrix yt-dlp timidity"
    wm="i3-gaps xautolock"
    dm="sddm"

    echo "installing new packages"
    sudo pacman -Sy --needed $browsers $editors $terminals $utilities $wm $dm

    if [ ! $aur!="" ]; then
        echo "installing aur packages"
        yay -Sy --needed $aur
    else
        echo "no aur packages required."
    fi


    echo "installing JetBrainsMono nerd font"
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/JetBrains/JetBrainsMono/master/install_manual.sh)"

    echo "installing tpm"
    git clone https://github.com/tmux-plugins/tpm ~/.tmux/plugins/tpm

    echo "installing dotfiles"
    cp ~/.dotfiles/* ~/
    ;;
# default non-linux system
*)
    echo "currently only supports linux kernels. please install manually."
    exit 1
    ;;
esac

echo "bootstrap finished, may require a reboot."
