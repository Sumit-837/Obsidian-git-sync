---
title: HTML & CSS - Lecture 8 Notes
tags:
  - html
  - css
  - webdev
created: 2025-05-31
---

# 🌐 Terminal Setup for Local Server

## 📦 Install and Run

```bash
pkg install nodejs
npm install -g http-server
```

## 🚀 Start Local Server

```bash
http-server
```

- Serves the current directory as a local web server.
- Copy the given link and paste it in a browser to preview your HTML files.

---

# 🧱 HTML Overview

> `att` = attribute, `ncs` = no closing required

## 🔣 Syntax Basics

- Tags are opened with `<tag>` and closed with `</tag>`.
- Comments are written using: `<!-- comment -->` (similar to SQL).

## 🌲 Tag Hierarchy Tree with Attributes

```markdown
html [lang="en"]
├── head
│   └── title
├── body
    ├── h1, h2, h3 (headings)
    ├── p (paragraph)
    ├── ul (unordered list)
    │   └── li (list item)
    ├── ol (ordered list)
    │   └── li (list item)
    ├── table
    │   └── tr (table row)
    │       ├── th (table header)
    │       └── td (table data)
    ├── img (ncs)
    │   ├── src="picname.png"
    │   ├── alt="description"
    │   └── width="300"
    ├── video
    │   ├── controls, muted
    │   └── source (ncs)
    │       ├── src="vid.mp4"
    │       └── type="video/mp4"
    ├── a (anchor, hyperlink) (ncs)
    │   └── href="url" → link text
    └── form
        ├── action="URL"
        ├── method="get" (default)
        ├── input (ncs)
        │   ├── name="q"
        │   ├── autocomplete="off"
        │   ├── autofocus
        │   ├── placeholder="query"
        │   ├── pattern=".+@.+\.edu"
        │   ├── type="search" | "email" | "submit"
        │   └── value="Submit button text"
        └── button (acts like input type="submit")
```

### 🔗 URL with Query Parameters

A URL can have query key-value pairs:

```
https://www.example.com/path?key=value
```

Google Search Example:

```
https://www.google.com/search?q=text_to_search
```

---

# ✅ HTML Validation and Entities

- Use [validator.w3.org](https://validator.w3.org) to validate HTML files.
- HTML entities like `&#169;` represent special characters (e.g., ©).

---

# 🎨 CSS (Cascading Style Sheets)

## 📍 Where to Place CSS

- Inline: via `style` attribute
- Internal: using `<style>` tag in `<head>`
- External: using `<link>` tag in `<head>`

### Example: Inline

```html
<p style="font-size: large; text-align: center;">Text</p>
```

### Example: Internal

```html
<head>
  <style>
    body {
      text-align: center;
    }
    header {
      font-size: medium;
    }
  </style>
</head>
```

### Example: External

```html
<link href="style.css" rel="stylesheet">
```

---

## 📌 Selectors in CSS

1. **Type Selector**

```css
p {
  font-size: 16pt;
}
```

2. **Class Selector**

```css
.classname {
  text-align: center;
}
```

Usage in HTML:

```html
<p class="classname">Text</p>
```

3. **ID Selector**

```css
#idname {
  color: red;
}
```

Usage in HTML:

```html
<a id="idname">Link</a>
```

> ⚠️ IDs must be unique; use only once per page.

4. **Attribute Selector**

```css
input[type="email"] {
  background-color: yellow;
}
```

---

## 📐 Semantic Tags (HTML5)

```markdown
body
├── header
├── main
├── footer
```

Use `div` for layout sections if needed.

---

# 📦 Frameworks: Bootstrap (CSS Framework)

## 🧩 Overview

- Open-source CSS framework.
- Include by linking Bootstrap CSS file in `<head>`:

```html
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
```

## 🧱 Example Bootstrap Table

```html
<table class="table table-striped">
  <tr>
    <th scope="col">Heading</th>
    <th scope="col">Heading 2</th>
  </tr>
  <tr>
    <td>Data 1</td>
    <td>Data 2</td>
  </tr>
</table>
```

> For more, visit [getbootstrap.com](https://getbootstrap.com)

---

# 🧠 Summary Tips

- Prefer `class` over `id` for styling.
- Use `<form>` with `input` and `button` for user input.
- Use internal or external stylesheets instead of inline styles for scalability.
- Semantic tags (`header`, `main`, `footer`) improve accessibility.

---

Let me know if you'd like a visual diagram or embed-ready version next!
