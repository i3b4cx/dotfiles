return {
    "neovim/nvim-lspconfig",
    config = function()
        local capabilities = require("cmp_nvim_lsp").default_capabilities()
        local clangd = require("lspconfig").clangd.setup({
            on_attach = on_attach,
            capabilities = capabilities,
            cmd = {
                "clangd",
                "--log=verbose",
                "--compile-commands-dir=./build/",
                "--query-driver=/usr/bin/clang,/usr/bin/gcc,/usr/bin/g++,/opt/synkbox/1.6.2/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++"
            }
        })
        local tsserver = require("lspconfig").tsserver.setup({
            on_attach = on_attach,
            capabilities = capabilities,
            cmd = {
                "typescript-language-server",
                "--stdio",
            },
            filetypes = {"javascript", "javascriptreact", "javascript.jsx", "typescript", "typescriptreact", "typescript.tsx"},
            init_options = {hostInfo = "neovim"},
            single_file_support = true
        })
        local intelephense = require("lspconfig").intelephense.setup({
            on_attach = on_attach,
            capabilities = capabilities,
            cmd = {
                "intelephense",
                "--stdio",
            },
            filetypes = {"php"}
        })
    end,
}
