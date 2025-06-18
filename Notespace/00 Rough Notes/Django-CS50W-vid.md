---
title: Django
tags:
  - cs
  - cs50w
  - lit
created: 2025-06-15
source: "[[Vid-CS50W-2020#Lecture 3 - Django]]"
Professor: Brian Yu
---

Django is a python framework that will enable us to _dynamically_ generate HTML and CSS. Our django web application will reside on our server and process requests from clients.
## Installing Django
```Shell
pip install Django
```
## Django project
Create a Django project with this command :
```shell
django-admin startproject PROJECT_NAME
```
This will create a directory with another directory of same name in it ,containing some python files eg...
#### Some django files
- **manage.py** : This will be used to execute commands on this project.
- **settings.py** : contains important configuration settings. Can be modified.
- **urls.py** : table of contents for our web application.
#### Running the Django web - application
```shell
python manage.py runserver
```
This will give an adress where this project is running.
### Django applications
#### Creating the app
A Django project consists of multiple applications. We can create one by this command:
```shell
python manage.py startapp app_name
```
This will create a directory for the app inside the project folder. This directory will also contain some python files. 
#### Installing the app
Inside the `settings.py` of the initial directory (which has same name with the project directory), you'll find a section with a list variable called INSTALLED_APPS . keep the new app name inside it as a string.
```python title:project/project/settings.py
INSTALLED_APPS = [
	'app_name',
	#other default apps
]
```
#### Creating a default view for the app
- Go into `views.py` inside the app folder.
- Make a function which takes a request (which is ginna be the http request that the user might make) and gives a responce. eg.
```python title:project/app/views.py
 from django.shortcuts import render
 from django.http import HttpResponse

 # Create your views here.

 def index(request):
     return HttpResponse("Hello, world!")
```
[^1]
- then create a new file named `urls.py`inside the app directory and we need to make a variable (list) named `urlpatterns` which will contain all urls that can be accessed from the app.
- the element od this lists will be a path function with some arguments `path("", views-to-render, name="optional")`
- in the place of views-to-render we can place views (functions from views.py)

---
[^1]: HttpResponse is a special class created by Django, so we have to import it
