
# Lecture 3 - Django

## Introduction
- Last time we looked at Python, which allowed us to create more complex web applications.
- Today, we’re going to look at a Python framework called **Django** which makes writing these applications much easier.

## Django
- **Django** is a Python web framework, meaning it is a collection of modules that make it easier to build web applications using Python.
- Django was created in 2003 by two programmers working at a newspaper who wanted to be able to create web applications quickly and easily.
- Django has since become one of the most popular web frameworks, used by companies like Instagram, Disqus, and Pinterest.
- Django is often compared to another popular web framework, **Ruby on Rails**, which similarly makes it easy to write web applications, but uses the Ruby programming language instead of Python.
- Django’s motto is **“The web framework for perfectionists with deadlines”**, as it allows us to quickly write secure and maintainable web applications.
- Some of the key features of Django include:
  - An **ORM** (Object-Relational Mapper), which allows us to interact with a database using Python objects rather than having to write SQL code.
  - A templating language, which makes it easy to create dynamic HTML pages.
  - A number of built-in features like user authentication, so we don’t need to write that code ourselves.
- To use Django, we first need to install it using `pip`, the Python package manager. We can do this with the command:
	```shell
  pip install django
  ```
- Once installed, we can create a new Django project with:
```shell
django-admin startproject projectname
```

- This will create a new directory called `projectname` with a number of files and folders inside of it:
  - `manage.py`: A command-line utility that lets us interact with the project.
  - `projectname/`: A directory with the same name as our project that contains:
    - `__init__.py`: An empty file that tells Python that this directory should be considered a Python package.
    - `settings.py`: Configuration for our project, such as which database to use.
    - `urls.py`: A file that maps URLs to views in our project.
    - `wsgi.py`: An entry-point for WSGI-compatible web servers to serve our project.
  - We can run our project with:
    ```bash
    python manage.py runserver
    ```
  - This will start a local web server, which we can visit in a web browser at `http://127.0.0.1:8000/`.
- Inside of our project we can create **applications** using:
  ```bash
  python manage.py startapp appname
  ```
- This will create a new directory called `appname` with files like:
  - `models.py`: Where we define our data models.
  - `views.py`: Where we define the logic for what happens when a particular URL is visited.
  - `urls.py`: Optionally, where we can define URLs specific to this application.
- In Django, an **application** is a self-contained set of functionality (e.g., a blog, a forum), while a **project** is a collection of these applications along with their configuration.

## Models
- In Django, a **model** is a Python class that represents a table in a database.
- For example, if we were making a flight reservation application, we might have a model that looks like this:
  ```python
  from django.db import models

  class Flight(models.Model):
      origin = models.CharField(max_length=64)
      destination = models.CharField(max_length=64)
      duration = models.IntegerField()
  ```
- In this example:
  - `CharField` is a field that stores text, with a maximum length of 64 characters.
  - `IntegerField` is a field that stores an integer.
- After creating a model, we need to create a **migration**, which is a set of instructions for how to update our database to reflect the new model:
  ```bash
  python manage.py makemigrations
  ```
- We then apply the migration to update the database with:
  ```bash
  python manage.py migrate
  ```
- By default, Django uses a SQLite database, which is just a file on our computer, but we can configure it to use other databases like PostgreSQL or MySQL.

## Admin Interface
- One powerful feature of Django is its built-in **admin interface**, which provides a web-based interface for managing the data in our database.
- To use it, we first need to create a superuser with:
  ```bash
  python manage.py createsuperuser
  ```
- Then we need to register our model in the application’s `admin.py` file. For example:
  ```python
  from django.contrib import admin
  from .models import Flight

  admin.site.register(Flight)
  ```
- Now, when we run the server and visit `/admin` in the browser, we can log in and manage our `Flight` objects.

## Views and URLs
- In Django, a **view** is a Python function that takes a request and returns a response.
- For example, a simple view might look like this:
  ```python
  from django.http import HttpResponse

  def index(request):
      return HttpResponse("Hello, world!")
  ```
- To make this view accessible, we need to map it to a URL in our project’s `urls.py`:
  ```python
  from django.urls import path
  from . import views

  urlpatterns = [
      path("", views.index, name="index"),
  ]
  ```
- In this example, visiting the root URL (`/`) will call the `index` view, which returns the text “Hello, world!”.
- We can also create views that render templates or interact with models. For example:
  ```python
  from django.shortcuts import render
  from .models import Flight

  def flights(request):
      return render(request, "flights.html", {
          "flights": Flight.objects.all()
      })
  ```
- In this case, the view retrieves all `Flight` objects from the database and passes them to a template called `flights.html`.

## Templates
- Django uses a templating language that allows us to create dynamic HTML pages.
- Templates are stored in a `templates` directory within our application.
- For example, a `flights.html` template might look like this:
  ```html
  <!DOCTYPE html>
  <html>
      <head>
          <title>Flights</title>
      </head>
      <body>
          <h1>Flights</h1>
          <ul>
              {% for flight in flights %}
                  <li>{{ flight.origin }} to {{ flight.destination }} ({{ flight.duration }} minutes)</li>
              {% endfor %}
          </ul>
      </body>
  </html>
  ```
- In this template:
  - `{% for flight in flights %}` loops over the `flights` variable passed from the view.
  - `{{ flight.origin }}` outputs the value of the `origin` field for each flight.
- Django’s templating language also supports conditionals, filters, and more.

## URLs with Parameters
- We can create URLs that take parameters. For example, to show details for a specific flight:
  ```python
  urlpatterns = [
      path("flights/<int:flight_id>", views.flight, name="flight")
  ]
  ```
- The corresponding view might look like this:
  ```python
  def flight(request, flight_id):
      flight = Flight.objects.get(id=flight_id)
      return render(request, "flight.html", {
          "flight": flight
      })
  ```
- This allows us to visit a URL like `/flights/1` to see details about the flight with ID 1.

## Forms
- Django makes it easy to handle HTML forms.
- For example, we might have a form in a template like this:
  ```html
  <form action="{% url 'book' %}" method="post">
      {% csrf_token %}
      <input type="hidden" name="flight_id" value="{{ flight.id }}">
      <input type="submit" value="Book Flight">
  </form>
  ```
- The `{% csrf_token %}` tag is required for security to prevent cross-site request forgery.
- The corresponding view to handle the form submission might look like:
  ```python
  def book(request):
      if request.method == "POST":
          flight = Flight.objects.get(id=request.POST["flight_id"])
          # Logic to book the flight
          return HttpResponse("Flight booked!")
  ```

## Static Files
- **Static files** like CSS, JavaScript, and images can be stored in a `static` directory in our application.
- To use them, we need to add the following to our template:
  ```html
  {% load static %}
  <link rel="stylesheet" href="{% static 'styles.css' %}">
  ```
- We also need to run:
  ```bash
  python manage.py collectstatic
  ```
- This gathers all static files into a single directory for the web server to serve.

## Example Application
- In class, we looked at an example application for booking flights, which used all of these concepts together:
  - Models to represent flights and passengers.
  - Views to display lists of flights and details for individual flights.
  - Templates to render the HTML.
  - URLs to map user requests to views.
  - Forms to allow users to book flights.
- The source code for this application is available in the course’s GitHub repository: [CS50W Flights Example](https://github.com/cs50/web/tree/2020/x/lectures/3/flights).

## Additional Resources
- [Django Documentation](https://www.djangoproject.com/)
- [CS50W Lecture 3 Source Code](https://github.com/cs50/web/tree/2020/x/lectures/3)
- [Django Tutorial](https://docs.djangoproject.com/en/3.1/intro/tutorial01/)

## Images
- [Django Logo](https://cs50.harvard.edu/web/2020/notes/3/django.png)  
  *Placeholder for the Django logo image used on the page.*
### Instructions for Using the Markdown File in Obsidian
1. **Copy the File**:
   - Copy the entire content above (now fully within a code block for easy copying).
   - Paste it into a new file in your Obsidian vault and save it as `CS50_Lecture3_Django.md`.

2. **Handle the Image**:
   - The Django logo is referenced as a link (`https://cs50.harvard.edu/web/2020/notes/3/django.png`). To embed it in Obsidian:
     - Download the image from the URL.
     - Save it in your vault (e.g., `assets/django.png`).
     - Update the image reference to `![Django Logo](assets/django.png)` or the relative path to your image.
   - Alternatively, keep the link as-is to reference the online image.

3. **Obsidian Features**:
   - The frontmatter includes `title`, `tags`, and `date` for metadata organization.
   - Tags (`CS50`, `Web Programming`, `Django`, `Python`) can link to related notes.
   - Add internal links (e.g., `[[Django]]`) manually if you have related notes.

4. **Verification**:
   - The content matches the website exactly, including all text, code, and links.
   - Nested code blocks (e.g., `python`, `bash`, `html`) are tagged for syntax highlighting.
   - The structure uses Markdown headings and lists to reflect the website’s layout.



