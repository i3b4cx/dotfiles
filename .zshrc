# Enable Powerlevel10k instant prompt. Should stay close to the top of ~/.zshrc.
# Initialization code that may require console input (password prompts, [y/n]
# confirmations, etc.) must go above this block; everything else may go below.
if [[ -r "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh" ]]; then
  source "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh"
fi

# Created by newuser for 5.9
WLR_NO_HARDWARE_CURSORS=1
LIBGL_ALWAYS_SOFTWARE=1
EDITOR=nvim
FCEDIT=nvim
SVN_EDITOR=nvim

alias l='ls -lah --color=auto'

alias v=nvim
alias ac='nvim ~/.config/alacritty/alacritty.yml'
alias zc='nvim ~/.zshrc'
alias ic='nvim ~/.config/i3/config'

alias sa='source ~/.zshrc'
source ~/powerlevel10k/powerlevel10k.zsh-theme

# To customize prompt, run `p10k configure` or edit ~/.p10k.zsh.
[[ ! -f ~/.p10k.zsh ]] || source ~/.p10k.zsh

[ -f ~/.fzf.zsh ] && source ~/.fzf.zsh
export PATH=$PATH:~/bin
K="https://vm001.kgisystems.com/synkboxclient/synkboxclient"
