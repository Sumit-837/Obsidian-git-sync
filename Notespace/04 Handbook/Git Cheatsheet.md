---
source: ChatGPT
tags:
  - git
  - github
---

# 🧠 Git Commands Cheatsheet

Your go-to list for all essential and advanced Git commands — with clear explanations.

---

## ⚙️ Basic Configuration

```shell
git config --global user.name "Your Name"       # Set your name globally
git config --global user.email "you@email.com"  # Set your email globally
git config --list                               # Show all Git settings
```

---

## 🌱 Repository Setup

```shell
git init                     # Initialize a new Git repo in current folder
git clone <url>              # Download (clone) a repo from remote to local
```

---

## 📋 Staging & Committing

```shell
git status                   # Check which files are staged/unstaged/untracked
git add <file>               # Stage a specific file
git add .                    # Stage new/modified files (not deletions)
git add -A                   # Stage all changes: new, modified, and deleted
git rm <file>                # Remove a file from Git tracking
git commit -m "msg"          # Commit staged changes with a message
git commit -am "msg"         # Add + commit only modified tracked files
```

---

## 🔀 Branching & Merging

```Shell
git branch                   # List all local branches
git branch <name>            # Create a new branch
git checkout <name>          # Switch to the specified branch
git checkout -b <name>       # Create and switch to a new branch
git merge <branch>           # Merge another branch into current one
git branch -d <name>         # Delete a local branch
```

---

## 🌐 Working with Remotes

```Shell
git remote -v                       # Show remote repo URLs
git remote add origin <url>         # Link local repo to a remote
git push -u origin <branch>         # Push branch and set upstream
git push                            # Push committed changes to remote
git pull                            # Fetch and merge changes from remote
git fetch                           # Fetch changes but don't merge yet
```

---

## 🕰️ Viewing History

```Shell
git log                             # View commit history
git log --oneline --graph           # Compact log with branching visual
git show <commit>                   # See details of a specific commit
```

---

## 🧽 Undoing & Cleaning

```Shell
git restore <file>                  # Undo changes to a file in working dir
git checkout -- <file>              # (Old) undo changes in working dir

git reset                           # Unstage all staged files
git reset <file>                    # Unstage a specific file
git reset --soft HEAD~1             # Undo last commit, keep changes staged
git reset --hard HEAD               # Discard all changes and commits
git clean -fd                       # Remove untracked files and folders
```

---

## 💾 Stashing Changes

```Shell
git stash                           # Save unfinished changes temporarily
git stash pop                       # Reapply stashed changes and delete stash
git stash list                      # View all stashed changes
git stash drop                      # Delete the last stash
```

---

## 🔍 Comparing & Searching

```Shell
git diff                            # Show unstaged changes
git diff --staged                   # Show staged vs last commit
git grep "pattern"                  # Search for a string in the repo
```

---

## 🏷️ Tags (Releases)

```Shell
git tag                             # List all tags
git tag <name>                      # Create a lightweight tag
git tag -a <name> -m "message"      # Create an annotated tag
git push origin <tag>               # Push a single tag
git push origin --tags              # Push all tags to remote
```

---

## ✨ Aliases (Shortcuts)

```Shell
git config --global alias.st status
git config --global alias.co checkout
git config --global alias.ci commit
git config --global alias.br branch
```

You can now run `git st` instead of `git status`, and so on.

---

## 🚫 Fix Dubious Ownership (Android/Termux issue)

```Shell
git config --global --add safe.directory /your/full/path
```

Solves:  
`fatal: detected dubious ownership in repository`

---

## 📌 Tips

- Use `git log --oneline` to get a quick summary of your commits.
- You can redirect logs:  
  `git log --oneline > log.txt`
- Use `git reflog` to recover commits after reset.

---

## 📚 Resources

- 📘 [Git Book](https://git-scm.com/book/en/v2)
- 📄 [GitHub Cheatsheet PDF](https://education.github.com/git-cheat-sheet-education.pdf)
- `man git` — view Git’s manual in terminal

---

✅ *Last updated: 2025-06-04*
