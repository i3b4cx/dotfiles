return {
    "nvim-neo-tree/neo-tree.nvim", -- File Explorer
    branch = "v2.x",
    dependencies = {
        "nvim-lua/plenary.nvim",
        "nvim-tree/nvim-web-devicons", -- not strictly required, but recommended
        "MunifTanjim/nui.nvim",
    },
    config = {
        require("neo-tree").setup({
            source_selector = {
                winbar = false,
                statusline = false
            }
        })
    }
}
