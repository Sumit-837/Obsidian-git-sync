# Obsidian Git Sync ✨

> Compact, git‑backed snapshot of my Obsidian vault — for history, portability, and peace of mind.  
> *Brief by intention; richly formatted for clarity.*

---

## 🚀 TL;DR

- **Purpose:** Track & back up Markdown notes + Obsidian config.
- **Scope:** Personal knowledge base (not a library or plugin).
- **Sync:** Manual / scripted Git pushes & pulls.
- **Status:** Active vault storage.

---

> Folder names may evolve; this README stays intentionally minimal.

---

## 🧭 What This Repo Is (and Isn’t)

| Is ✅ | Isn’t ❌ |
|------|----------|
| Personal note repository | General-purpose sync tool |
| Git history for ideas | Full-featured Obsidian plugin |
| Lightweight + private structure | A tutorial on Obsidian |
| Simple backup method | A public knowledge base |

---

## 🛠 Workflow (Mini)

1. Edit notes in Obsidian  
2. `git add -A`  
3. `git commit -m "update: <short context>"`  
4. `git pull --ff-only && git push`  

```bash
# Example snippet
git add -A
git commit -m "vault: update $(date -u +'%Y-%m-%d %H:%M UTC')"
git pull --ff-only
git push
```

---

## ✅ Task Snapshot

- [x] Initialize repo
- [x] Add baseline structure
- [ ] Add optional automation script
- [ ] Add license
- [ ] (Maybe) add encryption instructions

---

## 🔍 Definitions

Obsidian  
: Local-first Markdown knowledge base app

Vault  
: Directory containing notes + config

---

## 💬 Notes

> [!NOTE]  
> This is not meant for broad community collaboration; PRs likely unnecessary unless invited.

> [!TIP]  
> Use a **private remote** if storing sensitive content.[^privacy]

---

## 📌 Mini Changelog (Manual)

<details>
<summary>Click to expand</summary>

- Initial commit: Base vault + structure  
- Added README: Brief descriptive version  

</details>

---

## 🧾 Meta

**Visibility:** Public (may change)  
**Owner:** [@Sumit-837](https://github.com/Sumit-837)  
**License:** (Not set yet)  

---

## 🔗 Quick Clone

```bash
git clone https://github.com/Sumit-837/Obsidian-git-sync.git
```

---

## 🗃 Footnotes

[^privacy]: Private repos or client-side encryption recommended for sensitive or proprietary information.

---

Made concise on purpose — ask if you'd like a longer variant, automation scripts, or a structured config section.
