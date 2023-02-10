""" Plugins
call plug#begin('~/.local/share/nvim/plugged')
" Autocompletion
Plug 'neoclide/coc.nvim', { 'branch': 'release'}
" Tools
Plug 'junegunn/fzf', { 'dir': '~/.fzf', 'do': './install --all' }
Plug 'junegunn/fzf.vim'
" Visuals
Plug 'lilydjwg/colorizer'
Plug 'sheerun/vim-polyglot'
Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle'}
Plug 'Xuyuanp/nerdtree-git-plugin', { 'on': 'NERDTreeToggle'}
" Aesthetics
Plug 'arcticicestudio/nord-vim'
Plug 'chriskempson/base16-vim'
Plug 'vim-airline/vim-airline'
" Plug 'tiagofumo/vim-nerdtree-syntax-highlight', { 'on': 'NERDTreeToggle'}
Plug 'ryanoasis/vim-devicons', { 'on': 'NERDTreeToggle'}
call plug#end()

""" General Settings
" Be IMproved, required
set nocompatible
" Disable cursor changing https://git.io/JfbFH
set guicursor=
" For security
set nomodeline
" Load plugin files for specific file types
filetype plugin on
" Turn on syntax highlighting
syntax on
" Split horizontally and jump to right
set sb
" Split vertically and jump down
set spr
" Ignore case of normal letters
set ignorecase
" Ignore case when pattern contains lowercase letters only
set smartcase
" Hide buffer when abandoned
" Required for operations modifying multiple buffers
set hidden
" Buffer screen updates
set lazyredraw
" Time of inactivity before writing swap file to disk
set updatetime=500
" Show line numbers
set number
" Set relative line numbering
set relativenumber
" Visualize certain whitespace characters
set list lcs=tab:\|\ ,trail:.,extends:>,precedes:<,nbsp:␣
" Set indent to be 4 spaces
set shiftwidth=4
" Uses spaces to insert a <Tab>
set expandtab
" Lines with equal indent form a fold
set foldmethod=indent
" Start with no folds closed
set foldlevelstart=99
" Concealed text is hidden unless it has replacement defined
set conceallevel=2
" Hide mode message
set noshowmode
" Suppress ins-completion-menu messages
set shortmess+=c
" Enable mouse support
set mouse=a
" Minimal height of noncurrent windows
set winminheight=0
" Set leader key
let mapleader = ';'
" Suppress netrw history
let g:netrw_dirhistmax = 0
" Set blinking curor on
set guicursor=a:blinkon25

" Set curosr line in insert
autocmd InsertEnter,InsertLeave * set cul!


""" Navigation

" Window Navigation
nnoremap <silent> <leader>h <C-w>h
nnoremap <silent> <leader>j <C-w>j
nnoremap <silent> <leader>k <C-w>k
nnoremap <silent> <leader>l <C-w>l
nnoremap <silent> <leader>H <C-w>H
nnoremap <silent> <leader>J <C-w>J
nnoremap <silent> <leader>K <C-w>K
nnoremap <silent> <leader>L <C-w>L
nnoremap <silent> <C-H> :vertical resize -5<CR>
nnoremap <silent> <C-J> :resize +5<CR>
nnoremap <silent> <C-K> :resize -5<CR>
nnoremap <silent> <C-L> :vertical resize +5<CR>

" Tab Navigation
nnoremap <silent> th :tabfirst<CR>
nnoremap <silent> tj :tabnext<CR>
nnoremap <silent> tk :tabprev<CR>
nnoremap <silent> tl :tablast<CR>
nnoremap <silent> td :tabclose<CR>
nnoremap <silent> tn :tabnew<CR>

" Use g[jk] for vertical movement in wrapped lines when no count is specified
nnoremap <silent> <expr> k (v:count == 0 ? 'gk' : 'k')
nnoremap <silent> <expr> j (v:count == 0 ? 'gj' : 'j')

" Center searches
nnoremap <silent> n nzz
nnoremap <silent> N Nzz
nnoremap <silent> * *N

""" Plugin Configurations

" NerdTree
nnoremap <silent> <C-\> :NERDTreeToggle<CR>
nnoremap <leader>n :NERDTreeFind<CR>
let NERDTreeMinimalUI = 1
let NERDTreeDirArrows = 1
" let NERDTreeQuitOnOpen = 1

" Aesthetics
let base16colorspace=256
colorscheme nord

" Airline
let g:airline_symbols = {}
let g:airline_symbols.linenr = 'Ξ'
let g:airline_powerline_fonts = 1
let g:airline_skip_empty_sections = 1
let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#branch#enabled = 1
let g:airline#extensions#branch#empty_message = ''
let g:airline#extensions#whitespace#symbol= '!'
let g:airline_left_sep=''
let g:airline_left_alt_sep=''
let g:airline_right_sep=''
let g:airline_right_alt_sep=''

" Keybindings
nnoremap <silent> <C-Space> :Files<CR>
nnoremap <silent> <C-g> :Rg<CR>
nnoremap <silent> <C-b> :Buffers<CR>
nnoremap <silent> <C-c> :Commands<CR>
nnoremap <silent> <space><space> :buffer #<CR>
nnoremap <silent> <leader><space> :nohlsearch<CR>
nnoremap <silent> <leader>/ :BLines<CR>
nnoremap <silent> <leader>d :bp<bar>bd#<CR>

nnoremap <silent> <leader>s :w<CR>
nnoremap <silent> <leader>z :x<CR>
nnoremap <silent> <leader>x :xa<CR>
nnoremap <silent> <leader>q :qa<CR>
noremap <silent> <leader>y "+y
nnoremap <silent> <leader><leader> ;

" FZF
let $FZF_DEFAULT_COMMAND =  "rg --files --hidden 2>/dev/null"
let $FZF_DEFAULT_OPTS=' --color=dark
      \ --color=fg:15,bg:-1,hl:1,fg+:#ffffff,bg+:0,hl+:1
      \ --color=info:0,prompt:0,pointer:12,marker:4,spinner:11,header:-1
      \ --layout=reverse --margin=1,4'
" let g:fzf_layout = { 'window': 'call FloatingFZF()' }

function! FloatingFZF()
  let buf = nvim_create_buf(v:false, v:true)
  call setbufvar(buf, '&signcolumn', 'no')
  let height = float2nr(min([10, &lines/2]))
  let width = float2nr(min([80, &columns/2]))
  let horizontal = float2nr((&columns - width) / 2)
  let vertical = 2
  let opts = {
        \ 'relative': 'editor',
        \ 'row': vertical,
        \ 'col': horizontal,
        \ 'width': width,
        \ 'height': height,
        \ 'style': 'minimal'
        \ }
  call nvim_open_win(buf, v:true, opts)
endfunction


" Zoom/Restore window
function! s:ZoomToggle() abort
    if exists('t:zoomed') && t:zoomed
        execute t:zoom_winrestcmd
        let t:zoomed = 0
    else
        let t:zoom_winrestcmd = winrestcmd()
        resize
        vertical resize
        let t:zoomed = 1
    endif
endfunction
command! ZoomToggle call s:ZoomToggle()
nnoremap <silent> <C-w>o :ZoomToggle<CR>

nmap <silent> gd <Plug>(coc-definition)
inoremap <silent><expr> <tab> pumvisible() ? coc#_select_confirm() : "\<C-g>u\<TAB>"
inoremap <silent><expr> <cr> "\<c-g>u\<CR>"
