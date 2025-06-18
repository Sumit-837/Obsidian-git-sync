# Lecture 3

## Introduction

- So far, we’ve discussed how to build simple web pages using HTML and CSS, and how to use Git and GitHub in order to keep track of changes to our code and collaborate with others. We also familiarized ourselves with the Python programming language.
- Today, we’ll work on using Python’s `Django` framework in order to create dynamic applications.

## Web Applications

So far, all of the web applications we’ve written have  **static**. This means that every single time we open that web page, it looks exactly the same. Many websites we visit every day, however, change every time we visit them. If you visit the websites of the New York Times or Facebook, for example, you’ll most likely see different things today than you will tomorrow. For large sites like those, it would be unreasonable for employees to have to manually edit a large HTML file every time a change is made, which is where **dynamic** websites can be extremely useful. A dynamic website is one that takes advantage of a programming language (such as Python) to dynamically generate HTML and CSS files. During this lecture, we’ll learn how to create our first dynamic applications.

## HTTP

HTTP, or HyperText Transfer Protocol, is a widely-accepted protocol for how messages are transferred back and forth across the internet. Typically, information online is passed between a client (user) and a server.

![Client and Server](https://cs50.harvard.edu/web/2020/notes/3/images/client_server.png)

In this protocol, the client will send a **request** to the server, that might look something like the one below. In the example below, `GET` is simply a type of request, one of three we’ll discuss in this course. The `/` typically indicates that we’re looking for the website’s home page, and the three dots indicate that we could be passing in more information as well.

![Request](https://cs50.harvard.edu/web/2020/notes/3/images/request.png)

After receiving a request, a server will then send back an HTTP response, which might look something like the one below. Such a response will include the HTTP version, a status code (200 means OK), a description of the content, and then some additional information.

![Response](https://cs50.harvard.edu/web/2020/notes/3/images/response.png)

200 is just one of many status codes, some of which you may have seen in the past:

![Codes](https://cs50.harvard.edu/web/2020/notes/3/images/codes.png)

## Django

Django is a Python-based web framework that will allow us to write Python code that dynamically generates HTML and CSS. The advantage to using a framework like Django is that a lot of code is already written for us that we can take advantage of.

- To get started, we’ll have to install Django, which means you’ll also have to install pip if you haven’t already done so.
- Once you have Pip installed, you can run `pip3 install Django` in your terminal to install Django.

After installing Django, we can go through the steps of creating a new Django project:

- Run `django-admin startproject PROJECT_NAME` to create a number of starter files for our project.
- Run `cd PROJECT_NAME` to navigate into your new project’s directory.
- Open the directory in your text editor of choice. You’ll notice that some files have been created for you. We won’t need to look at most of these for now, but there are three that will be very important from the start:
    - `manage.py` is what we use to execute commands on our terminal. We won’t have to edit it, but we’ll use it often.
    - `settings.py` contains some important configuration settings for our new project. There are some default settings, but we may wish to change some of them from time to time.
    - `urls.py` contains directions for where users should be routed after navigating to a certain URL.
- Start the project by running `python manage.py runserver`. This will open a development server, which you can access by visiting the URL provided. This development server is being run locally on your machine, meaning other people cannot access your website. This should bring you to a default landing page:

![Landing Page](https://cs50.harvard.edu/web/2020/notes/3/images/landing.png)

- Next, we’ll have to create an application. Django projects are split into one or more **applications**. Most of our projects will only require one application, but larger sites can make use of this ability to split a site into multiple apps. To create an application, we run `python manage.py startapp APP_NAME`. This will create some additional directories and files that will be useful shortly, including `views.py`.
- Now, we have to install our new app. To do this, we go to `settings.py`, scroll down to the list of `INSTALLED_APPS`, and add the name of our new application to this list.

![Installed Apps](https://cs50.harvard.edu/web/2020/notes/3/images/installed.png)

## Routes

Now, in order to get started with our application:

- Next, we’ll navigate to `views.py`. This file will contain a number of different views, and we can think of a view for now as one page the user might like to see. To create our first view, we’ll write a function that takes in a `request`. For now, we’ll simply return an `HttpResponse` (a very simple response that includes a response code of 200 and a string of text that can be displayed in a web browser) of “Hello, World”. In order to do this, we have to include `from django.http import HttpResponse`. Our file now looks like:

```python
from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def index(request):
    return HttpResponse("Hello, world!")
```

- Now, we need to somehow associate this view we have just created with a specific URL. To do this, we’ll create another file called `urls.py` in the same directory as `views.py`. We already have a `urls.py` file for the whole project, but it is best to have a separate one for each individual app.

- Inside our new `urls.py`, we’ll create a list of url patterns that a user might visit while using our website. In order to do this:
    - We have to make some imports: `from django.urls import path` will give us the ability to reroute URLs, and `from . import views` will import any functions we’ve created in `views.py`.
    - Create a list called `urlpatterns`
    - For each desired URL, add an item to the `urlpatterns` list that contains a call to the `path` function with two or three arguments: A string representing the URL path, a function from `views.py` that we wish to call when that URL is visited, and (optionally) a name for that path, in the format `name="something"`. For example, here’s what our simple app looks like now:

```python
from django.urls import path
from . import views

urlpatterns = [
    path("", views.index, name="index")
]
```

- We have to make some imports:

- Now, we’ve created a `urls.py` for this specific application, and it’s time to edit the `urls.py` created for us for the entire project. When you open this file, you should see that there’s already a path called `admin` which we’ll go over in later lectures. We want to add another path for our new app, so we’ll add an item to the `urlpatterns` list. This follows the same pattern as our earlier paths, except instead of adding a function from `views.py` as our second argument, we want to be able to include *all* of the paths from the `urls.py` file within our application. To do this, we write: `include("APP_NAME.urls")`, where `include` is a function we gain access to by also importing `include` from `django.urls` as shown in the `urls.py` below:

```python
from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('hello/', include("hello.urls"))
]
```

- By doing this, we’ve specified that when a user visits our site, and then in the search bar adds `/hello` to the URL, they’ll be redirected to the paths inside of our new application.

Now, when I start my application using `python manage.py runserver` and visit the url provided, I’m met with this screen:

![Wrong URL](https://cs50.harvard.edu/web/2020/notes/3/images/404.png)

But this is because we have only defined the URL `localhost:8000/hello`, but we haven’t defined the URL `localhost:8000` with nothing added to the end. So, when I add `/hello` to the URL in my search bar:

![Hello, world](https://cs50.harvard.edu/web/2020/notes/3/images/helloworld.png)

Now that we’ve had some success, let’s go over what just happened to get us to that point:

- When we accessed the URL `localhost:8000/hello/`, Django looked at what came after the base URL (`localhost:8000/`) and went to our project’s `urls.py` file and searched for a pattern that matched `hello`.
- It found that extension because we defined it, and saw that when met with that extension, it should `include` our `urls.py` file from within our application.
- Then, Django ignored the parts of the URL it has already used in rerouting (`localhost:8000/hello/`, or all of it) and looked inside our other `urls.py` file for a pattern that matches the remaining part of the URL.
- It found that our only path so far (`""`) matched what was left of the URL, and so it directed us to the function from `views.py` associated with that path.
- Finally, Django ran that function within `views.py`, and returned the result (`HttpResponse("Hello, world!")`) to our web browser.

Now, if we want to, we can change the `index` function within `views.py` to return anything we want it to! We could even keep track of variables and do calculations within the function before eventually returning something.

Now, let’s take a look at how we can add more than one view to our application. We can follow many of the same steps within our application to create pages that say hello to Brian and David.

Inside `views.py`:

```python
from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def index(request):
    return HttpResponse("Hello, world!")

def brian(request):
    return HttpResponse("Hello, Brian!")

def david(request):
    return HttpResponse("Hello, David!")
```

Inside `urls.py` (within our application):

```python
from django.urls import path
from . import views

urlpatterns = [
    path("", views.index, name="index"),
    path("brian", views.brian, name="brian"),
    path("david", views.david, name="david")
]
```

Now, our site remains unchanged when we visit `localhost:8000/hello`, but we get different pages when we add `brian` or `david` to the URL:

![Brian](https://cs50.harvard.edu/web/2020/notes/3/images/brian.png)
![David](https://cs50.harvard.edu/web/2020/notes/3/images/david.png)

Many sites are parameterized by items included in the URL. For example, going to www.twitter.com/cs50 will show you all of CS50’s tweets, and going to www.github.com/cs50 will bring you to CS50’s GitHub page. You can even find your own public GitHub repositories by navigating to `www.github.com/YOUR_USERNAME`!

In thinking about how this is implemented, it seems impossible that sites like GitHub and Twitter would have an individual URL path for each of its users, so let’s look into how we could make a path that’s a bit more flexible. We’ll start by adding a more general function, called `greet`, to `views.py`:

```python
def greet(request, name):
    return HttpResponse(f"Hello, {name}!")
```

This function takes in not only a request, but also an additional argument of a user’s name, and then returns a custom HTTP Response based on that name. Next, we have to create a more flexible path in `urls.py`, which could look something like this:

```python
path("<str:name>", views.greet, name="greet")
```

This is some new syntax, but essentially what’s going on here is we’re no longer looking for a specific word or name in the URL, but any string that a user might enter. Now, we can try the site out with a few other URLs:

![Harry](https://cs50.harvard.edu/web/2020/notes/3/images/harry.png)
![Connor](https://cs50.harvard.edu/web/2020/notes/3/images/connor.png)

I can even make these look a little bit nicer, by augmenting the `greet` function to utilize Python’s `capitalize` function that capitalizes a string:

```python
def greet(request, name):
    return HttpResponse(f"Hello, {name.capitalize()}!")
```

![Harry](https://cs50.harvard.edu/web/2020/notes/3/images/harryc.png)
![Connor](https://cs50.harvard.edu/web/2020/notes/3/images/connorc.png)

This is a great illustration of how any functionality we have in Python can be used in Django before being returned.

## Templates

So far, our HTTP Responses have been only text, but we can include any HTML elements we want to! For example, I could decide to return a blue header instead of just the text in our `index` function:

```python
def index(request):
    return HttpResponse("<h1 style=\"color:blue\">Hello, world!</h1>")
```

![Blue](https://cs50.harvard.edu/web/2020/notes/3/images/bluehello.png)

It would get very tedious to write an entire HTML page within `views.py`. It would also constitute bad design, as we want to keep separate parts of our project in separate files whenever possible.

This is why we’ll now introduce Django’s templates, which will allow us to write HTML and CSS in separate files and render those files using Django. The syntax we’ll use for rendering a template looks like this:

```python
def index(request):
    return render(request, "hello/index.html")
```

Now, we’ll need to create that template. To do this, we’ll create a folder called `templates` inside our app, then create a folder called `hello` (or whatever our app’s name is) within that, and then add a file called `index.html`.

![Files](https://cs50.harvard.edu/web/2020/notes/3/images/files.png)

Next, we’ll add whatever we want to that new file:

```html
<!DOCTYPE html>
<html lang="en">
    <head>
        <title>Hello</title>
    </head>
    <body>
        <h1>Hello, World!</h1>
    </body>
</html>
```

Now, when we visit the main page of our application, we can see the header and title have been updated:

![Template 0](https://cs50.harvard.edu/web/2020/notes/3/images/template0.png)

In addition to writing some static HTML pages, we can also use Django’s templating language to change the content of our HTML files based on the URL visited. Let’s try it out by changing our `greet` function from earlier:

```python
def greet(request, name):
    return render(request, "hello/greet.html", {
        "name": name.capitalize()
    })
```

Notice that we passed a third argument into the `render` function here, one that is known as the **context**. In this context, we can provide information that we would like to have available within our HTML files. This context takes the form of a Python dictionary. Now, we can create a `greet.html` file:

```html
<!DOCTYPE html>
<html lang="en">
    <head>
        <title>Hello</title>
    </head>
    <body>
        <h1>Hello, {{ name }}!</h1>
    </body>
</html>
```

You’ll notice that we used some new syntax: double curly brackets. This syntax allows us to access variables that we’ve provided in the `context` argument. Now, when we try it out:

![Template 1](https://cs50.harvard.edu/web/2020/notes/3/images/template1.png)
![Template 2](https://cs50.harvard.edu/web/2020/notes/3/images/template2.png)

Now, we’ve seen how we can modify our HTML templates based on the context we provide. However, the Django templating language is even more powerful than that, so let’s take a look at a few other ways it can be helpful:

### Conditionals

We may want to change what is displayed on our website depending on some conditions. For example, if you visit the site www.isitchristmas.com, you’ll probably be met with a page that looks like this:

![No](https://cs50.harvard.edu/web/2020/notes/3/images/isitno.png)

But this website will change on Christmas day, when the website will say YES.

To make something like this for ourselves, let’s try creating a similar application, where we check whether or not it is New Year’s Day. To do this, let’s create a new app to do so, recalling our process for creating a new app:

- Run `python manage.py startapp newyear` in the terminal.
- Edit `settings.py`, adding “newyear” as one of our `INSTALLED_APPS`
- Edit our project’s `urls.py` file, and include a path similar to the one we created for the `hello` app:

```python
path('newyear/', include("newyear.urls"))
```

- Create another `urls.py` file within our new app’s directory, and update it to include a path similar to the index path in `hello`:

```python
from django.urls import path
from . import views

urlpatterns = [
    path("", views.index, name="index"),
]
```

- Create an index function in `views.py`.

Now that we’re set up with our new app, let’s figure out how to check whether or not it’s New Year’s Day. To do this, we can import Python’s datetime module. To get a sense for how this module works, we can look at the documentation, and then test it outside of Django using the Python interpreter.

- The **Python interpreter** is a tool we can use to test out small chunks of Python code. To use this, run `python` in your terminal, and then you’ll be able to type and run Python code within your terminal. When you’re done using the interpreter, run `exit()` to leave.

![Interpreter](https://cs50.harvard.edu/web/2020/notes/3/images/datetime.png)

- We can use this knowledge to construct a boolean expression that will evaluate to True if and only if today is New Year’s Day: `now.day == 1 and now.month == 1`
- Now that we have an expression we can use to evaluate whether or not it’s New Year’s Day, we can update our index function in `views.py`:

```python
def index(request):
    now = datetime.datetime.now()
    return render(request, "newyear/index.html", {
        "newyear": now.month == 1 and now.day == 1
    })
```

Now, let’s create our `index.html` template. We’ll have to again create a new folder called `templates`, a folder within that called `newyear`, and a file within that called `index.html`. Inside that file, we’ll write something like this:

```html
<!DOCTYPE html>
<html lang="en">
    <head>
        <title>Is it New Year's?</title>
    </head>
    <body>
        {% if newyear %}
            <h1>YES</h1>
        {% else %}
            <h1>NO</h1>
        {% endif %}
    </body>
</html>
```

In the code above, notice that when we wish to include logic in our HTML files, we use `{%` and `%}` as opening and closing tags around logical statements. Also note that Django’s formatting language requires you to include an ending tag indicating that we are done with our `if-else` block. Now, we can open up to our page to see:

![No](https://cs50.harvard.edu/web/2020/notes/3/images/no.png)

Now, to get a better idea of what’s going on behind the scenes, let’s inspect the element of this page:

![Source](https://cs50.harvard.edu/web/2020/notes/3/images/source.png)

Notice that the HTML that is actually being sent to your web browser includes only the NO header, meaning that Django is using the HTML template we wrote to create a new HTML file, and then sending it to our web browser. If we cheat a little bit and make sure that our condition is always true, we see that the opposite case is filled:

```python
def index(request):
    now = datetime.datetime.now()
    return render(request, "newyear/index.html", {
        "newyear": True
    })
```

![Yes](https://cs50.harvard.edu/web/2020/notes/3/images/yes.png)
![Source 0](https://cs50.harvard.edu/web/2020/notes/3/images/source0.png)

### Styling

If we want to add a CSS file, which is a *static* file because it doesn’t change, we’ll first create a folder called `static`, then create a `newyear` folder within that, and then a `styles.css` file within that. In this file, we can add any styling we wish just as we did in the first lecture:

```css
h1 {
    font-family: sans-serif;
    font-size: 90px;
    text-align: center;
}
```




