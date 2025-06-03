---
tags:
  - html
  - css
  - webdev
  - cs
  - cs50w
  - cs50x
  - sass
created: 2025-06-01
Proffessor: David J Malan, Brian Yu
source1: "[[CS50W-Lec 0-HTML and CSS]]"
source2: "[[CS50X-Lec 8-HTML-CSS-Javascript]]"
---
## Setting up a server

This serves your current directory as a local server:
1.  Install NodeJS (if not already installed):
    ```bash
    pkg install nodejs
    ```
^01e493
2.  Install `http-server` globally:
    ```bash
    npm install -g http-server
    ```
3.  Run `http-server` in your project directory:
    ```bash
    http-server
    ```
    This will provide a link to paste into your browser to view your codespace/current directory as a server.

---

## HTML (HyperText Markup Language)

**Key Notes:**
* `ncs` means no need to close the tag.
* Open tags with `<tag>` and close with `</tag>`.
### HTML Tag Structure & Common Tags
Below, we show the document object model (DOM)

**`<!DOCTYPE html>`** start with this 
* **`<html>`**: The root element.
    - Attribute: `lang="en"` (e.g., for English)
    * **`<head>`**: Contains meta-information about the HTML document.
        * **`<title>`**: Specifies the title for the browser tab or window.
        * **`<style>`**: Contains CSS style information (see CSS section).
        * **`<link>`** (ncs): Links to external resources, like CSS stylesheets.
            * Attributes: `href="file.css"`, `rel="stylesheet"`
    * **`<body>`**: Contains the visible page content.
        * **`<h1>`, `<h2>`, `<h3>`**: Headings of different levels.
        * **`<p>`**: Paragraph.
        * **`<ul>`**: Unordered list.[^4]
            * **`<li>`**: List item.
        * **`<ol>`**: Ordered list.
            * **`<li>`**: List item.
        * **`<table>`**: Defines a table.
		        _either step by step_
	        * **`<thead>`** : heading row of the table
		        * **`<tr>`**: Table row.
			        * **`<th>`**: Table header cell.
		    * **`<tbody>`**: 
			    * **`<tr>`**: Table row.
	                * **`<td>`**: Table data cell.
	            _or directly_
			* **`<tr>`**: Table row.
	            * **`<th>`**: Table header cell.
	            * **`<td>`**: Table data cell.
        * **`<img>`** (ncs): Embeds an image.
            * Attributes:
                * `src=`"picname.png" (source file)
                * `alt=`"text" (alternative text for accessibility)
                * `width=`"300" (width in pixels)...
        * **`<video>`**: Embeds a video.
            * Attribute: `controls` (shows player controls)
            * **`<source>`** (ncs): Defines media resources for the video.
                * Attributes: 
	                * `src=`"vid.mp4" 
	                * `type="video/mp4"`
	                * `muted` (optional)
        * **`<a>`** : anchor-tag, Creates a hyperlink.
            * Attribute: `href=`"file_or_url"
            * Example: `<a href="https://www.example.com">text-to-link</a>`
        * **`<form>`**: Creates an HTML form for user input.
            * Attributes:
                * `action="URL"` (where to send form data)
                * `method="get"` (default method)
            * **`<input>`** (ncs): Creates an input field.
                * Attributes:
                    * `name=`"q" (name of the input field)
                    * `autocomplete="off"`
                    * `autofocus` (automatically focuses on this field)
                    * `placeholder=`"query" (example text in the input field)
                    * `pattern=`".+@.+\.edu" (uses regular expressions for input validation, e.g., for an .edu email)
                    * `type=`:
                        * `"search"` (default, takes any text)
                        * `"email"` (validates for email format, saves using `pattern` for common email validation)
                        * `"password"` (hides the input like password)
                        * `"submit"` (creates a button to submit the form)[^1]
                        * `"radio"` (creates a round checkbox)[^2]
                    * `list=`"text-content" creates a dropdown list input box which is associated with the **`<datalist>`** tag.
                    * `value=`"text" (sets the text displayed on a submit button)
            * **`<datalist>`**(ncs):keeps the drop down list
	            * Attributes: `id=`"text-content"
	            * **`<option>`**(ncs): contains option of the list
		            * Attributes: `value=`"option 1"
            * **`<button>`**: Creates a button (works similarly to `<input type="submit">`).
        * **`<div>`**: A generic container for flow content, often used for styling with CSS; creates rectangular regions. Can be used instead of `<p>` for grouping content. Divs can be nested.
        * **`<header>`**: Represents introductory content, typically a group of introductory or navigational aids.
        * **`<main>`**: Represents the dominant content of the `<body>` of a document.
        * **`<footer>`**: Represents a footer for its nearest sectioning content or a footer for the entire page.

### URLs
* URLs can have one or more key-value pairs.
    * Example: `https://www.example.com/path?key=value`
    * Google search example: `https://www.google.com/search?q=text_to_search`

### HTML Validation & Entities
* Validate your HTML files for flaws at [validator.w3.org](https://validator.w3.org).
* HTML Entities: Use codes for special characters, e.g., `&#169;` for the copyright symbol (©).

---

## CSS (Cascading Style Sheets)

CSS uses **properties** (key-value pairs) to style HTML elements.

### Applying CSS
There are multiple ways to apply CSS:

1.  **Inline Styles**: Using the `style` attribute directly on an HTML element / tags.
    * Can be applied to `<body>`, `<p>`, `<div>`, etc.
    * Example: `style="font-size: large; text-align: center;color: blue;"`[^3]

2.  **Internal Stylesheet**: Using the `<style>` tag within the `<head>` section of an HTML document.
3.  **External Stylesheet**: Linking to a `.css` file using the `<link>` tag in the `<head>`.
    * Example: `<link rel="stylesheet" href="file.css">`
    * This is often the best method for managing styles, especially for larger sites.
### Example of CSS properties
```CSS
div {
	font-family: Arial, sans-serif;
	font-size: large;
	font-weight: bold;
	text-align: center;
	color: blue;
	width: 200px;
	height: 200px;
	padding: 20px; 
	margin: 20px;
	border: 3px solid black;
	border-collapse: collapse;
}
```
### CSS Selectors
Selectors define which HTML elements the styles should be applied to. _These are kept in the CSS file or directly inside style block in head._[Reference link](https://www.w3schools.com/cssref/css_selectors.php)
##### Types of selectors
1.  **Type Selector** (targets elements by their tag name)
    * Define styles directly for tags within the `<style>` block or a CSS file. like `tagname` {css properties}
    * Example:
        ```css
        body {
          text-align: center;
        }

	    td, th {
          font-size: medium;
        }
        ``` 
2.  **Class Selector** (targets elements with a specific `class` attribute) 
    * Define a class in CSS using a dot `.classname`{properties}.
    * Apply the class to any HTML tag using `class="classname"`.
    * Example CSS:
	```css
	.classname {
	    text-align: left; /* Example property */
    }
    ``` 
    ^3febee
    
    * Example HTML: `<div class="classname">...</div>`
3.  **ID Selector** (targets a single element with a specific `id` attribute)
    * Set an ID to an HTML tag using attribute `id="idname"`.
    * write the ID in CSS using a hash `#idname` {properties}.
    * IDs **must be unique** within an HTML document unlike [[HTML & CSS Notes#^3febee|class]]; do not use the same ID in multiple places.
    * Example (e.g., to colorize a specific link):
        ```css
        #idname {
          color: red; /* or #ff0000 */
        }
        ```
    * Example HTML: `<a href="#" id="idname">Special Link</a>`
    * Child selector `>` [^5]
4.  **Attribute Selector** (Targets elements based on the presence or value of an attribute)
    * It's used like `tag[attribute]`, `tag[attribute=value]`, etc.
    * Example:
	```CSS
	input[type="text"] {
		border: 1px solid blue;
	}
    ```
- . **Pseudo Class** (Shows its css properties when said action is being done)
	- It's used like `tag:action` {properties}
	- Example: this changes the button color when hovering over it
	``` CSS
	button:hover {
		background-color: orange;
	}
	```
##### Specificity
This tells which selector will get priority in case of collision
**inline > id > class > type**

---
## Responsive Design
### Viewport 
- It's the entire area of webpage that displays content. It is different for different devices. So, we need to make webpage adapt the device width.
- `<meta name="viewport" content="width=device-width, initial-scale=1.0">`
### Media Queries
- How our page look based on how it's rendered.
- Example. setting different style of the page for different screen sizes.
	```CSS
	@media (min-width: 600px) {
		body {
			background-color: red
		}
	}
	
	@media (max-width: 599px) {
		body {
			background-color: blue
		}
	}
	```
### Flexbox
- Adjusts and arranges the elements of webpage according to screen size
- Example: give an id to an html element containing multiple divs then , inside style tag...
	```css
	#idname {
		display: flex; /*makes it a flexbox tag*/
		flex-wrap: wrap; /*this wraps around those divs if there's not enough space*/
	}
	```
### Grids
- For flexibly  arranging things in a table/ grid.
- Example: give an id to a parent div containing child divs and then...
	```css
	#idname {
		display: grid; /*enables grid*/
		grid-column-gap: 20px; /*grid props...*/
		grid-row-gap: 10px;
		grid-template-columns: 200px 200px auto;
	```

---
## CSS Frameworks: Bootstrap

* Bootstrap is an open-source CSS framework/ library.
* To use it, link the Bootstrap CSS link inside the `<head>` section using the `<link>` tag.
* The link is 
	```html
	<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.4.1/dist/css/bootstrap.min.css" integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh" crossorigin="anonymous">
	```
- Values of attributes (like `class`) can be multiple, separated by spaces.

### Example: 
#### Styling a Table with Bootstrap

* Add the Bootstrap class `table` to your `<table>` tag.
* You can add other Bootstrap classes like `table-striped` for additional styling.
* Use the `scope` attribute on `<th>` elements for accessibility.

    * **`<table>`**
        * Attribute: `class="table table-striped"`
        * **`<tr>`** (table row)
            * **`<th>`** (heading)
                * Attribute: `scope="col"`
            * **`<td>`** (table data/cells)
#### More example:
- alert class to show alerts
- column class for table
* For more information, visit [getbootstrap.com](https://getbootstrap.com).
---
## Sass (syntactically awesome style sheets)
- It is a language , like an extention to css, makes css easier. 
- it helps us to remove repetition in css by introducing variables.
- sass file extention is `.scss`
### Installation
- In linux terminal (if node.js is already [[HTML & CSS Notes#^01e493| installed]]):
	```bash
	npm install -g sass
	```
### Application
#### Variables
1. **Creating a variable**: create a `.scss` file then create variables inside it with doller sign
	```scss
	$color1: red;
	```
2. **Compiling it into a css file**: so that system can read it
	```shell
	sass file.scss:file.css
	```
3. **Watch for changes**: this command constantly watches if you changed the scss file and auto-compiles the css file.
	```shell
	sass --watch file.scss:file.css
	```
4. link the css file in the html head.
5. now, we can use the variable as a value of css property `color` eg. `color= $color1;`
#### Nested selectors
- We can't use nested selectors in css, but sass allows it. eg.
	```scss
	div {
		font-size: 18px;
		p {
			color: blue;
		}
		ul {
			color: green;
		}
	}
	```
#### Inheritance
- When multiple selectors share lots of properties in common with a little bit difference (eg. alert messages)
- Then we take the common part into one selector , defining it with a `%` sign and use it inside the selectors with `@extend %commonselector;`
- Example: 
	```scss
	%message {
	font-family: sans-serif;
	font-size: 18px;
	border: 1px;
	}
	.success {
	@extend %message;
	background-color: green;
	}
	.error {
	@extend %message;
	background-color: red;
	}
	```

---
[^1]: Submitting the form adds `?name=user_input` (or `?email=user_input` etc.) after the URL.

[^2]:  single correct by default if multiple created

[^3]: Font sizes can be `pt` (points) e.g., `18pt`, `24pt`, etc., instead of `large`, `medium`, `small`.

[^4]: All lists can be nested

[^5]: Child selector: Selects child tag/ tags from the parent id tag eg. `#idname > child-tag` {properties}. There are child selectors for other selectors too.
