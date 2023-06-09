return {
    "neovim/nvim-lspconfig",
    config = function()
        local capabilities = require("cmp_nvim_lsp").default_capabilities()
        local lsp = require("lspconfig").clangd.setup({
            on_attach = on_attach,
            capabilities = capabilities,
            cmd = {
                "clangd",
                "--log=verbose",
                "--compile-commands-dir=./build/",
                "--query-driver=/usr/bin/clang,/usr/bin/gcc,/usr/bin/g++,/opt/synkbox/1.6.2/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++"
            }
        })
    end,
}
