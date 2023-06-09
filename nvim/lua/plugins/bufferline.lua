return {
    "akinsho/bufferline.nvim",
    version = "*",
    dependencies = "nvim-tree/nvim-web-devicons",
    opts = function(_, opts)
        local bufferline = require("bufferline").setup()
    end,
}
