vim.o.termguicolors = true
vim.o.syntax = 'on'
vim.o.errorbells = false
vim.opt.smartcase = true
vim.opt.ignorecase = true
vim.opt.laststatus = 3
vim.o.showmode = false
vim.bo.swapfile = false
vim.o.backup = false
vim.o.undodir = vim.fn.stdpath('config') .. '/undodir'
vim.o.undofile = true
vim.o.incsearch = true
vim.o.hidden = true
vim.o.completeopt='menuone,noinsert,noselect'
vim.bo.autoindent = true
vim.bo.smartindent = true
vim.o.tabstop = 4
vim.o.softtabstop = 4
vim.o.shiftwidth = 4
vim.o.expandtab = true
vim.wo.number = true
vim.wo.relativenumber = true
vim.opt.fillchars = { eob = ' ' }
vim.wo.wrap = false

-- disable netrw at the very start of your init.lua (strongly advised)
vim.g.loaded_netrw = 1
vim.g.loaded_netrwPlugin = 1

vim.cmd [[colorscheme forestbones]]
vim.cmd [[let g:neo_tree_remove_legacy_commands = 1]]

-- autocomplete setting for nvim-cmp
vim.opt.completeopt = { "menu", "menuone", "noselect" }
