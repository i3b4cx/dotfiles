"
"	.vimrc
"	Henry Purdum
"	https://vimawesome.com/ for more cool plugins
"

call plug#begin('~/.vim/plugged')
Plug 'preservim/nerdtree'
Plug 'rainglow/vim'
Plug 'itchyny/lightline.vim'
Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
Plug 'junegunn/fzf.vim'
Plug 'shinchu/lightline-seoul256.vim'
Plug 'airblade/vim-gitgutter'
Plug 'tpope/vim-repeat'
Plug 'tpope/vim-surround'
Plug 'TaDaa/vimade'
call plug#end()

map ; :Files<CR>
map <C-n> :NERDTree<CR>

let g:lightline = {}
let g:lightline.colorscheme='seoul256'
syntax enable
filetype plugin indent on

set mouse=a
set tabstop=4
set nocompatible
set noshowmode
set laststatus=2
set number
set cursorline
set wildmenu
set visualbell
set encoding=utf-8
set showmatch

colorscheme darcula
hi Normal guibg=NONE ctermbg=NONE
