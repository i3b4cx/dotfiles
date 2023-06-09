# .dotfiles

i primarily work with [c++](https://isocpp.org/), [gl2](https://www.khronos.org/opengl/), [valgrind](https://valgrind.org/), [gdb](https://www.sourceware.org/gdb/), and [zsh](https://www.zsh.org/) shell scripts. these dots are configured to assist this work flow.

only supporting arch and it's derivatives for the moment.

![Screenshot](/screenshots/screenshot.png)

## features and usage

#### i3 \[xorg wm\]
no longer need the gaps fork since it's been merged into the original tree. used alongside xss-lock, i3lock, and feh.
- `ic`: opens i3 config in neovim.

#### picom \[i3 compositor\]
technically a [fork](https://github.com/ibhagwan/picom) of the original picom source, that adds dual kawase blur and rounded corners.
- `picom`: technically started by i3 session for you, but you can also start it manually.

#### kitty \[terminal\]
i keep a relatively minimal kitty config and primarily focus on theme matching neovim.

#### zsh \[scripting\]
currently using oh-my-zsh over p10k, looking into moving to prezto.

#### neovim \[editor\]
recently moved from packer to lazy and refactored my config to match.
- `nvim`: start neovim.
- `v` : alias.

#### ranger \[file explorer\]
simple curses based file explorer.
- `ranger`: open ranger.

#### rofi \[dmenu clone\]
great application launcher with theme support.
- `i3modifier + d`: start rofi.

#### valgrind \[profiler\]
memory profiler and efficiency tool for c/c++ development.
- `valgrind -h`: for info.

#### gdb \[debugger\]
general debug tool for c/c++ development.
- `gdb -h`: for info.

#### apitrace \[gl-debugging tool\]
great tool for analyzing gl api calls during renders.
- `apitrace -h`: for info.

## install
1. run: `git clone git@github.com:i3b4cx/dotfiles.git ~/.dotfiles`
2. Change the name and email address in `git/.config/git/config`
3. Arch Linux only: Change `pacmanfile/.config/pacmanfile/pacmanfile.txt` to your liking or add `pacmanfile-extra.txt` to the same directory for independent packages per machine
**WARNING: This may install and/or remove software and change your configs!**
4. run: `~/dotfiles/install.sh`
5. Either import an existing PGP key pair by using `gpg --import my-key.asc` and `gpg --import my-key-pub.asc`, or create a new one by following the [GitHub guide](https://help.github.com/en/articles/generating-a-new-gpg-key). You need to use the same name and email address as an ID that you have configured in `git/.gitconfig` to correctly sign your Git commits.
6. Either import an existing SSH key pair by copying it to `~/.ssh/id_rsa` and `~/.ssh/id_rsa.pub` or create a new one by following the [GitHub guide](https://help.github.com/en/articles/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent).

## quick and dirty:
**WARNING: This may install and/or remove software and change your configs!**
run this:
```shell
$ curl -s https://raw.githubusercontent.com/i3b4cx/dotfiles/main/install.sh | sh
```
