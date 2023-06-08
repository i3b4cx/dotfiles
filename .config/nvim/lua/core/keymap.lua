vim.g.mapleader = ' '

vim.keymap.set("n", "l", "<cmd>:Lazy<CR>")
vim.keymap.set("n", "br", "<cmd>:!build-release.sh<CR>")
vim.keymap.set("n", "bd", "<cmd>:!build-debug.sh<CR>")
vim.keymap.set("n", "bc", "<cmd>:!rm -rf build<CR>")
vim.keymap.set("n", "f", "<cmd>:NvimTreeToggle<CR>")

vim.keymap.set("n", "<leader>m", "<cmd>:MinimapToggle<CR>")

vim.keymap.set("n", "<leader>ff", "<cmd>:Telescope find_files<CR>")
vim.keymap.set("n", "<leader>fs", "<cmd>:Telescope live_grep<CR>")

vim.keymap.set("n", "gd", ":call CocAction('jumpDefinition')<CR>")
