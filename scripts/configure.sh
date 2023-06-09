#!/bin/bash

echo "This script assumes an ssh-key has already been generated at '~/.ssh/id_rsa' and is associated with an authorized github user."
echo "5 seconds to cancel ('^C') before launching script:"
sleep 5

echo "Changing user's default shell"
chsh -s /bin/zsh $(whoami)

echo "Linking ssh-key:"
eval $(ssh-agent -s)
ssh-add ~/.ssh/id_rsa

echo "Cloning git repositories:"
git clone git@github.com:i3b4cx/dotfiles ~/.dotfiles
git clone git@github.com:i3b4cx/wallpapers ~/.wallpapers

echo "Overwritting local configurations:"
cp -rf ~/.dotfiles/.config .
cp -rf ~/.dotfiles/.zshrc .
