---
tags:
  - linux
  - terminal
created: 2025-05-31
---

My college computer is based on Ubuntu. It runs Gnome terminal with bash shell. Following things work in general with linux terminals as well as in termux
### .bashrc
Commands in this file will run immediately after I launch terminal if i'm using bash shell.
This file resides in the default home directory `~/`
I can  run it's all commands again by:
```bash
source .bashrc
```
For zsh shell, this file is named as `.zshrc`
My default setup of this file must include:
```bash
alias ls="lsd"
eval "$(starship init bash)"
cd desired-working-directory
```
^a8eabc

### Styling shell
##### Fonts
Best fonts are [NerdFonts](https://www.nerdfonts.com/font-downloads) . Download a zip file of a font-pack, extract and select the one `.ttf` or .`otf` file you want, then paste it in the default place of font file which is usually `~/.local/share/fonts/` for linux and `~/.termux/font.ttf`[^1] in termux.

[^1]: Renaming the file is important in termux.
##### Lsd 
lsd is beautified version of ls that shows list of contents of the folder with pics (if nerdfonts are installed). Install it with
```shell
apt install lsd
```
And then make an alias of it in the `.bashrc` [[Linux Terminal Scribbles#^a8eabc|like here]]
##### Starship
This is best when it comes to styling the shell. Initialise it in the `.bashrc` or `.zshrc` with
```shell
eval "$(starship init bash)"
```
Find your `.config` folder and then make a file named `starship.toml` inside it amd paste your favourite starship config inside it. You can copy the thing from this [link](https://github.com/starship/starship/discussions/1107)

### Changing default shell
Use  command `chsh -s desired-shell`. eg...
```bash
chsh -s zsh
```
### Image to ASCII converter  : jp2a
```shell
jp2a image.jpeg --color
```
### Too long didn't read : tldr
This gives a short summary how a command work
```shell
tldr jp2a
```
