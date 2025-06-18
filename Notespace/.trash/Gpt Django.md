
## Web Applications

Today, we’ll work on using Python’s **Django framework** in order to create dynamic applications.
### Static vs Dynamic

So far, all of the web applications we’ve written have been **static**. This means that every single time we open that web page, it looks exactly the same.

Many websites we visit every day, however, change every time we visit them. If you visit the websites of the *New York Times* or *Facebook*, for example, you’ll most likely see different things today than you will tomorrow.

> For large sites like those, it would be unreasonable for employees to have to manually edit a large HTML file every time a change is made.

This is where **dynamic websites** can be extremely useful.

A dynamic website is one that takes advantage of a programming language (such as Python) to dynamically generate HTML and CSS files.

During this lecture, we’ll learn how to create our first dynamic applications.

---

## HTTP

**HTTP**, or **HyperText Transfer Protocol**, is a widely-accepted protocol for how messages are transferred back and forth across the internet.

Typically, information online is passed between a **client** (user) and a **server**.

### Client and Server

In this protocol, the client will send a **request** to the server, that might look something like the one below.

- In the example, `GET` is simply a type of request (one of three we’ll discuss in this course).
- The `/` typically indicates that we’re looking for the website’s home page.
- The `...` indicates that we could be passing in more information as well.

#### Request

```
GET / HTTP/1.1
Host: www.example.com
```

After receiving a request, a server will then send back an **HTTP response**, which might look something like the one below.

Such a response will include:

- The HTTP version,
- A status code (`200` means OK),
- A description of the content,
- And some additional information.

#### Response

```
HTTP/1.1 200 OK
Content-Type: text/html
```
---

### Status Codes

`200` is just one of many status codes, some of which you may have seen in the past:

- `200 OK`: The request was successful.
- `301 Moved Permanently`: The page has been moved.
- `403 Forbidden`: Access denied.
- `404 Not Found`: The page was not found.
- `500 Internal Server Error`: Something went wrong on the server.

---

## Django

**Django** is a Python-based web framework that allows us to write Python code that **dynamically generates HTML and CSS**.

The advantage to using a framework like Django is that **a lot of code is already written for us** that we can take advantage of.

---

### Installing Django

To get started, we’ll have to install Django, which means you’ll also have to install `pip` if you haven’t already done so.

Once you have `pip` installed, you can run:

```shell
pip3 install Django
```

to install Django.

---

### Creating a Django Project

After installing Django, we can go through the steps of creating a new Django project:

1. Run:

```shell
   django-admin startproject PROJECT_NAME
   ```

   to create a number of starter files for our project.

2. Run:

   ```shell
   cd PROJECT_NAME
   ```

   to navigate into your new project’s directory.

3. Open the directory in your text editor of choice. You’ll notice that some files have been created for you.

   We won’t need to look at most of these for now, but there are three that will be very important from the start:

   - `manage.py`: What we use to execute commands on our terminal. We won’t have to edit it, but we’ll use it often.
   - `settings.py`: Contains some important configuration settings for our new project. There are some default settings, but we may wish to change some of them from time to time.
   - `urls.py`: This file will keep track of all of the different routes (pages) of your website. For example, if you want something to happen when someone goes to your site’s homepage, you’ll write that code here.

---
## Applications

In Django, we’ll create separate files and folders called **applications** that will each have their own functionality.

While our **project** refers to the entirety of the website, including all settings and applications, an **application** typically refers to one feature.

- For example, we might want to have one application that handles users logging in and out, and another application that handles blogs that users write.

To create a new application, we’ll run:

```shell
python3 manage.py startapp APP_NAME
```

When we do so, a new folder will be created with some files already created for us.

You’ll see files like:

- `models.py`: Will contain code that describes our data models (similar to classes).
- `views.py`: Will contain functions that describe what information is shown on different pages of our app.

---

### Hello, World

Let’s take a look at how we might use Django to create a very simple application that returns the message “Hello, world” when a user visits our site.

```shell
django-admin startproject project0
cd project0
python3 manage.py startapp hello
```

After doing so, we’ll want to let our project know that this app exists. We can do so by adding the name of the app to the list of `INSTALLED_APPS` in our `settings.py` file.

```python
INSTALLED_APPS = [
    "hello"
]
```

Next, we’ll want to update our `urls.py` file so that it knows to look for URLs defined by our `hello` app.

```python
from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path("admin/", admin.site.urls),
    path("", include("hello.urls"))
]
```

We’ll then want to create a new file in our app called `urls.py`, which will keep track of all of the URLs for the app.

```python
from django.urls import path
from . import views

urlpatterns = [
    path("", views.index, name="index")
]
```

Finally, we’ll define a function called `index` in our `views.py` file that determines what’s shown on the homepage.

```python
from django.http import HttpResponse

def index(request):
    return HttpResponse("Hello, world!")
```

If you now run:

```shell
python3 manage.py runserver
```

and navigate to `http://127.0.0.1:8000/`, you should see the message “Hello, world!” displayed on the screen.

---

## Templates

Right now, our views simply return `HttpResponse` objects containing the HTML we want to return.

This isn’t very ideal, as writing large blocks of HTML in a Python string isn’t easy or clean.

Instead, we’ll want to create **HTML templates** in their own files, and then let Django take care of the rest.

Let’s begin by creating a new folder inside our `hello` app called `templates`, and then another folder inside that one also called `hello`.

Inside the second `hello` folder, we’ll create a file called `index.html`.

```html
<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8">
        <title>Hello!</title>
    </head>
    <body>
        Hello, world!
    </body>
</html>
```

We can then update our `views.py` file to look like the one below.

```python
from django.shortcuts import render

def index(request):
    return render(request, "hello/index.html")
```

---


