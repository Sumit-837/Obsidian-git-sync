---
tags:
  - termux
title: Useful termux things
created: 2025-05-31
---

### Default home directory in Termux
Normally the default home directory of termux resides in:
`data/data/com.termux/files/home`
Or in short 
`~/`
Typing only cd will take you to this home directory.

### Setting Up Default Working Directory
If i tell [[Linux Terminal Scribbles#.bashrc|.bashrc]] where to go, then it'll take me to the desired working directory at the very launch of termux.  So, open `.bashrc` on any editor (eg. nvim) and change directory to desired.  
```bash
cd
nvim .bashrc
```
And then inside nvim,
```nvim
cd /storage/emulated/0/my-desired-folder
```
Then save and exit.

