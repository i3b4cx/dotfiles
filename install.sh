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
        sudo pacman -S --noconfirm --needed git
    fi

    # clone dots
	if [ ! -d ~/.dotfiles ]; then
		echo "cloning dots"
		git clone https://github.com/i3b4cx/dotfiles.git ~/.dotfiles
	fi

    sudo pacman -Syu

    aur="mantablockscreen"
    browsers="firefox"
    development="clang npm gcc g++ valgrind gdb apitrace"
    editors="neovim"
    terminals="kitty zsh zsh-autosuggestions zsh-syntax-highlighting"
    utilities="neofetch ranger w3m zsh rofi networkmanager dunst feh"
    wm="i3-wm i3lock i3status xss-lock"

    echo "installing new packages"
    sudo pacman -Sy $browsers $editors $terminals $utilities $wm

    echo "installing aur packages"
    yay -Sy $aur

    echo "installing JetBrainsMono nerd font"
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/JetBrains/JetBrainsMono/master/install_manual.sh)"
    ;;
# default non-linux system
*)
    echo "currently only supports linux kernels. please install manually."
    exit 1
    ;;
esac

# oh-my-zsh install
if [ ! -d ~/.oh-my-zsh]; then
	sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
fi

# zsh setup
if [ -x "$(command -v zsh)" ] && [ "$SHELL" != "$(command -v zsh)" ]; then
	echo "changing shell to zsh"
	grep -q -F "$(command -v zsh)" /etc/shells || sudo sh -c 'echo "$(command -v zsh)" >> /etc/shells'
	chsh -s "$(command -v zsh)"
fi

# remove existing bash config
rm -rf ~/.bash*

EDITOR=nvim

echo "dotfiles installed successfully. please reboot to finalize."
