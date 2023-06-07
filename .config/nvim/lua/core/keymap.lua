vim.g.mapleader = ' '

vim.keymap.set("n", "r", "<cmd>:Lazy<CR>")

vim.keymap.set("n", "<leader>", "<cmd>:WhichKey<CR>")
vim.keymap.set("n", "<leader>f", "<cmd>:Neotree<CR>")
vim.keymap.set("n", "<leader>m", "<cmd>:MinimapToggle<CR>")

vim.keymap.set("n", "ff", "<cmd>:Telescope find_files<CR>")
vim.keymap.set("n", "fs", "<cmd>:Telescope live_grep<CR>")

vim.keymap.set("n", "<leader>t", "<cmd>:ToggleTerm<CR>")
vim.keymap.set("t", "<leader>t", "<cmd>:ToggleTerm<CR>")

vim.keymap.set("n", "<C-h>", "<cmd>:wincmd h<CR>")
vim.keymap.set("n", "<C-j>", "<cmd>:wincmd j<CR>")
vim.keymap.set("n", "<C-k>", "<cmd>:wincmd k<CR>")
vim.keymap.set("n", "<C-l>", "<cmd>:wincmd l<CR>")

vim.keymap.set("t", "<C-h>", "<cmd>:wincmd h<CR>")
vim.keymap.set("t", "<C-j>", "<cmd>:wincmd j<CR>")
vim.keymap.set("t", "<C-k>", "<cmd>:wincmd k<CR>")
vim.keymap.set("t", "<C-l>", "<cmd>:wincmd l<CR>")
