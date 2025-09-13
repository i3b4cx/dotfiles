" Enable persistent history
set history=1000              " Number of commands and searches to remember
set undofile                  " Maintain undo history between sessions
set undodir=~/.vim/undodir    " Set undo directory
set viminfo='100,<1000,s1000  " Store history, registers, and marks

" Create undodir if it doesn't exist
if !isdirectory($HOME . "/.vim/undodir")
    call mkdir($HOME . "/.vim/undodir", "p")
endif
syntax on               " Enable syntax highlighting
set number              " Show line numbers
set noexpandtab    " Use tabs, not spaces
set tabstop=4      " A tab is shown as 4 spaces wide
set shiftwidth=4   " Indent by 4 spaces (1 tab)
set softtabstop=4  " Makes backspace delete a tab as 4 spaces
set mouse=a
