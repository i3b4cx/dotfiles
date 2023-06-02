#!/bin/bash

if [[ $UID != 0 ]]; then
    echo "Please run this script with sudo"
    echo "sudo $0 $*"
    exit 1
fi

echo "This script assumes an ssh-key has already been generated at '~/.ssh/id_rsa' and associated with an authorized github user."
echo "5 seconds to cancel '^C' before launching script:"
sleep 5

chsh -s /bin/zsh

git config --global user.name "Henry Purdum"
git config --global user.email "henrypurdum@gmail.com"

pushd ~
ssh-agent -s
ssh-add .ssh/id_rsa
git clone git@github.com:i3b4cx/dotfiles .dotfiles
git clone git@github.com:i3b4cx/wallpapers .wallpapers
cp -rf .dotfiles/.config .
cp -rf .dotfiles/.zshrc .
popd
