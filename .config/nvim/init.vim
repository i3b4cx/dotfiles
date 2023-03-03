"" Plugins
call plug#begin('~/.local/share/nvim/plugged')
" Autocompletion
Plug 'neoclide/coc.nvim', { 'branch': 'release'}
" Visuals
Plug 'sheerun/vim-polyglot'
Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle'}
Plug 'Xuyuanp/nerdtree-git-plugin', { 'on': 'NERDTreeToggle'}
" Aesthetics
Plug 'vim-airline/vim-airline'
Plug 'ryanoasis/vim-devicons', { 'on': 'NERDTreeToggle'}
Plug 'sainnhe/gruvbox-material'
call plug#end()

""" General Settings
" Be IMproved, required
set nocompatible
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

" Set cursor line in insert
autocmd InsertEnter,InsertLeave * set cul!

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

" Coc
nmap <silent> gd <Plug>(coc-definition)
nmap <silent> gy <Plug>(coc-type-definition)
nmap <silent> gi <Plug>(coc-implementation)
nmap <silent> gr <Plug>(coc-references)
nnoremap <silent> <C-f> :exe 'CocList files'<CR>
let g:coc_global_extensions = [
    \ 'coc-lists',
    \ 'coc-snippets',
    \ 'coc-pairs',
    \ 'coc-prettier',
    \]

" NerdTree
nnoremap <silent> <C-\> :NERDTreeToggle<CR>
let NERDTreeMinimalUI = 1
let NERDTreeDirArrows = 1
let NERDTreeMapOpenInTab = '\r'
let NERDTreeCustomOpenArgs={'file':{'where': 't'}}

" Aesthetics
if has('termguicolors')
	set termguicolors
endif
let g:gruvbox_material_background = 'soft'
let g:gruvbox_material_better_performance = 1
colorscheme gruvbox-material

" Airline
let g:airline_symbols = {}
let g:ariline_theme = 'gruvbox-material'
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

" Other Keybindings
nnoremap <silent> <leader>s :w<CR>
nnoremap <silent> <leader>z :x<CR>
nnoremap <silent> <leader>x :xa<CR>
nnoremap <silent> <leader>q :qa<CR>
noremap <silent> <leader>y "+y
nnoremap <silent> <leader><leader> ;

inoremap <silent><expr> <tab> pumvisible() ? coc#_select_confirm() : "\<C-g>u\<TAB>"
inoremap <silent><expr> <cr> "\<c-g>u\<CR>"
