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

-- disable netrw at the very start of your init.lua (strongly advised)
vim.g.loaded_netrw = 1
vim.g.loaded_netrwPlugin = 1

local key_mapper = function(mode, key, result)
  vim.api.nvim_set_keymap(
    mode,
    key,
    result,
    {noremap = true, silent = true}
  )
end

key_mapper('i', 'jk', '<ESC>')
key_mapper('i', 'JK', '<ESC>')
key_mapper('i', 'jK', '<ESC>')
key_mapper('v', 'jk', '<ESC>')
key_mapper('v', 'JK', '<ESC>')
key_mapper('v', 'jK', '<ESC>')

vim.g.mapleader = ';'


local vim = vim

local execute = vim.api.nvim_command
local fn = vim.fn
-- ensure that packer is installed
local install_path = fn.stdpath('data')..'/site/pack/packer/opt/packer.nvim'
if fn.empty(fn.glob(install_path)) > 0 then
  execute('!git clone https://github.com/wbthomason/packer.nvim '..install_path)
  execute 'packadd packer.nvim'
end
vim.cmd('packadd packer.nvim')
local packer = require'packer'
local util = require'packer.util'
packer.init({
package_root = util.join_paths(vim.fn.stdpath('data'), 'site', 'pack')
})

--- startup and add configure plugins
packer.startup(function()
  local use = use
    use {'nvim-treesitter/nvim-treesitter', run = ':TSUpdate'}
    use 'sheerun/vim-polyglot'
    use {'neoclide/coc.nvim', branch = 'release'}
    use 'nvim-lua/popup.nvim'
    use 'nvim-lua/plenary.nvim'
    use 'nvim-lua/telescope.nvim'
    use 'jremmen/vim-ripgrep'
    use 'nvim-tree/nvim-tree.lua'
    use {
      'goolord/alpha-nvim',
      requires = { 'nvim-tree/nvim-web-devicons' },
      config = function ()
          require'alpha'.setup(require'alpha.themes.startify'.config)
      end
    }
    use 'nvim-tree/nvim-web-devicons'
    use {'romgrk/barbar.nvim', requires = 'nvim-web-devicons'}
    use {"akinsho/toggleterm.nvim", tag = '*', config = function()
      require("toggleterm").setup({shade_terminals = false})
    end
    }
    -- these are optional themes but I hear good things about gloombuddy ;)
    -- colorbuddy allows us to run the gloombuddy theme
    -- use { "catppuccin/nvim", as = "catppuccin" }
    -- sneaking some formatting in here too
    use {'prettier/vim-prettier', run = 'yarn install' }
    use "lukas-reineke/indent-blankline.nvim"
    use {"rose-pine/neovim", as = "rose-pine"}
    end
)

require('rose-pine').setup({
	--- @usage 'auto'|'main'|'moon'|'dawn'
	variant = 'moon',
	--- @usage 'main'|'moon'|'dawn'
	dark_variant = 'main',
	bold_vert_split = false,
	dim_nc_background = false,
	disable_background = false,
	disable_float_background = false,
	disable_italics = false,

	--- @usage string hex value or named color from rosepinetheme.com/palette
	groups = {
		background = 'base',
		background_nc = '_experimental_nc',
		panel = 'surface',
		panel_nc = 'base',
		border = 'highlight_med',
		comment = 'muted',
		link = 'iris',
		punctuation = 'subtle',

		error = 'love',
		hint = 'iris',
		info = 'foam',
		warn = 'gold',

		headings = {
			h1 = 'iris',
			h2 = 'foam',
			h3 = 'rose',
			h4 = 'gold',
			h5 = 'pine',
			h6 = 'foam',
		}
		-- or set all headings at once
		-- headings = 'subtle'
	},

	-- Change specific vim highlight groups
	-- https://github.com/rose-pine/neovim/wiki/Recipes
	highlight_groups = {
		ColorColumn = { bg = 'rose' },

		-- Blend colours against the "base" background
		CursorLine = { bg = 'foam', blend = 10 },
		StatusLine = { fg = 'love', bg = 'love', blend = 10 },
	}
})

-- Set colorscheme after options
vim.cmd('colorscheme rose-pine')
-- setup must be called before loading

local configs = require'nvim-treesitter.configs'
configs.setup {
  ensure_installed = "",
  highlight = {
    enable = true,
  }
}

-- empty setup using defaults
require("nvim-tree").setup()

-- OR setup with some options
require("nvim-tree").setup({
  sort_by = "case_sensitive",
  renderer = {
    group_empty = true,
  },
  filters = {
    dotfiles = true,
  },
})

key_mapper('n', '<C-space>', ':lua require"telescope.builtin".find_files()<CR>')
key_mapper('n', '<leader>fs', ':lua require"telescope.builtin".live_grep()<CR>')
key_mapper('n', '<leader>fh', ':lua require"telescope.builtin".help_tags()<CR>')
key_mapper('n', '<leader>fb', ':lua require"telescope.builtin".buffers()<CR>')

key_mapper('n', '<C-f>', ':NvimTreeToggle<CR>')

key_mapper("n", "gd", "<Plug>(coc-definition)", {silent = true})
key_mapper("n", "gy", "<Plug>(coc-type-definition)", {silent = true})
key_mapper("n", "gi", "<Plug>(coc-implementation)", {silent = true})
key_mapper("n", "gr", "<Plug>(coc-references)", {silent = true})

local keyset = vim.keymap.set
local opts = {silent = true, noremap = true, expr = true, replace_keycodes = false}

keyset("i", "<cr>", [[coc#pum#visible() ? coc#pum#confirm() : "\<C-g>u\<CR>\<c-r>=coc#on_enter()\<CR>"]], opts)
vim.cmd('autocmd TermEnter term://*toggleterm#* tnoremap <silent><c-t> <Cmd>exe v:count1 . "ToggleTerm"<CR>')
vim.cmd('nnoremap <silent><c-t> <Cmd>exe v:count1 . "ToggleTerm"<CR>')
vim.cmd('inoremap <silent><c-t> <Esc><Cmd>exe v:count1 . "ToggleTerm"<CR>')
