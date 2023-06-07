vim.g.mapleader = ' '

vim.keymap.set("n", "r", "<cmd>:Lazy<CR>")

vim.keymap.set("n", "<leader>", "<cmd>:WhichKey<CR>")
vim.keymap.set("n", "<leader>f", "<cmd>:Neotree<CR>")
vim.keymap.set("n", "<leader>m", "<cmd>:MinimapToggle<CR>")

vim.keymap.set("n", "ff", "<cmd>:Telescope find_files<CR>")
vim.keymap.set("n", "fs", "<cmd>:Telescope live_grep<CR>")

vim.keymap.set("n", "<leader>t", "<cmd>:ToggleTerm<CR>")
vim.keymap.set("t", "<leader>t", "<cmd>:ToggleTerm<CR>")
