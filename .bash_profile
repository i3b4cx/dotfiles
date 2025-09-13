#
# ~/.bash_profile
#
if [ -z "$DISPLAY" ] && [ "$XDG_VTNR" = 1 ]; then
  exec startx &>/dev/null
fi
[[ -f ~/.bashrc ]] && . ~/.bashrc
PATH="$PATH:$HOME/.local/bin"
export SSH_AUTH_SOCK="$XDG_RUNTIME_DIR/ssh-agent.socket"
source .fehbg
