@echo off
cd /D "%~dp0"
:: -------------------------------------------
:: Main script part
:: -------------------------------------------

:: Change next line to call another utility
start "Utility to start before game" "fw\FlawlessWidescreen.exe"

echo "Arguments to be passed to game executable are: %*"

pause

:: Change next line to change path to game executable
start "Main game executable" "game.exe" %*
