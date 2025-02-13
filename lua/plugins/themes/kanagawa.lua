return {
    "rebelot/kanagawa.nvim",
    lazy = false,   -- set to false to load the theme immediately
    priority = 1000,  -- gives it high priority to load before others
    config = function()
        -- Set up the theme
        vim.cmd("colorscheme kanagawa")
    end,
}
