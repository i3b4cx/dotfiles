return {
    'kyazdani42/nvim-tree.lua',
    dependencies = { 'kyazdani42/nvim-web-devicons' },
    opts = function(_, opts)
        local nvim_tree = require("nvim-tree").setup()
    end,
}
