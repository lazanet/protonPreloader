# protonPreloader
Load game utilities before steam game loads

Made primarily to provide way to start configuration utilities for games that ship with separate exe files, as well as to enable using [FlawlessWidescreen](https://www.flawlesswidescreen.org/) (use 32bit because 64bit doesn't play well with injection in 32bit executables).

## Usage:
1) Find main game executable (usually `steamapps/common/GameName/binaries/something.exe` or similar)
2) Confirm that this exe file is invoked when you click play in Steam by renaming it to `game.exe`  and then pressing play (if Steam reports "missing executable" then we are good, else keep looking).
3) Wait for Steam to redownload said executable...
4) Download [this](https://github.com/lazanet/protonPreloader/blob/master/RenameThisFile.exe?raw=true) and rename it to game executable name (`something.exe` in this example). Copy it over (replace) original game execuable (providing that `game.exe` stil exists in that folder).
5) Download [`config.bat`](https://raw.githubusercontent.com/lazanet/protonPreloader/master/config.bat) and save it in the same directory.
6) Modify `config.bat` to suit your needs (if you want to run FlawlessWidescreen, download [32bit zip version](https://www.flawlesswidescreen.org/fws/flawlesswidescreen.zip) and unpack it to `fw` subdirectory).

Enjoy!

## Build
Use MinGW with  `g++ main.cpp`
