--[[
--NOTE: This is where your plugins go! put them in brackets like the following. Lazy will automatically pick them up and install them
--If you feel like this plugin is useful, feel free to git add commit push and make a pull request from your fork on GitHub. If there is a good, general use-case, I will merge it into the main branch :)
]]--


return {
	"Pocco81/auto-save.nvim";
	event = { "FocusLost" }, -- Load on focus loss
	config = function()
		require("auto-save").setup({
			trigger_events = {"FocusLost"}, -- Autosave when neovim loses focus
		})
	end
}
