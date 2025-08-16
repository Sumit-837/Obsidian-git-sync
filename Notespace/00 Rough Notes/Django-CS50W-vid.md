---
title: Django
tags:
  - cs
  - cs50w
  - lit
created: 2025-06-15
source: "[[Vid-CS50W-2020#Lecture 3 - Django]]"
source 2: "[[Note-CS50W-Lec3-Django]]"
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
#### Creating a view for the app
- Go into `views.py` inside the app folder.
- Make a **function** which takes a request (which is gonna be the http request that the user might make) and gives a responce. eg.
```python title:project/app/views.py
 from django.shortcuts import render
 from django.http import HttpResponse

 # Create your views here.

 def index(request):
     return HttpResponse("Hello, world!")
```
[^1]
#### Associating URL (adding routes)
- then create a new file named `urls.py` __inside the app directory__ and we need to make a variable (list) named `urlpatterns` which will contain all urls that can be accessed from the app.
- the element of this lists will be a *path* function with some [[Note-CS50W-Lec3-Django#^149722|arguments]] `path("", views-to-render, name="optional")`
- in the place of views-to-render we can place views (functions from views.py)
```python title:project/app/urls.py
from django.urls import path
from . import views  # Importing views.py from current folder

urlpatterns = [
    path("index", views.function_name, name="foo")
]
```

> We have to add `/appname/index` after the url in browser to open this view if we keep any specific string like `"index"` for the path.
> 
> > __empty string__ in the place of url path represents default path of that app. and will show that view after adding `/appname` after url. So the view will act as a **default view**.

^ef22fc

- Then open the `urls.py` file of the **project directory** and add a path indicating the app and all its urls inside the list  `urlpattern`.
- to add all its urls we use `include()`.
```python title:project/project/urls.py
from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('appname/', include("appname.urls"))
]
```
Now the routing is complete.

![[Note-CS50W-Lec3-Django#^2c9225]]
- And after `/appname` if they type in the [[Django-CS50W-vid#^ef22fc|specific path]] to a view of that app, they'll be routed to that view. Else they'll se the default view.
>[!note] 
>We can use a [[Note-CS50W-Lec3-Django#^6a1557|placeholder]] in the place of the path string
#### Adding Templates
- Instead of returning a text responce to a request, we can show entire html file. But [[Note-CS50W-Lec3-Django#^586d3b|inserting an entire html file]] inside HttpResponse in `views.py` will be bad design. Thats why we keep HTML and CSS  files seperate as **templates** and render them with Django.
##### Render function
- We have to import and use `render` function for that. It takes the _request_ as an argument , and takes the _template file / its location inside the template directory_ as another argument.
```python title:project/app/views.py
from django.shortcuts import render

def index(request):
    return render(request, "appname/index.html")
```
##### Folders
- Now we have to create a folder called `templates` in the app directory and keep our templates there
> [!tip] Tip
> If you notice here, i didnt directly put the html file inside the templates folder, instead created a subfolder named same with app's name inside templates and then kept it in that. 
>>This is to make sure that in case of multiple apps, templates don't conflict with each other.
- So now create said folder and files.
##### Using as Template
- But now we can no more use a [[Note-CS50W-Lec3-Django#^4e322f|placeholder]] like before as html doesn't support f-strings like python (as HTML ain't a programming language).
- But we can🤨😏, thats why in Django we call them templates. Django can take an html page and use its own templating language to put variables, conditions, loops inside it.
- Here comes the optional _third argument_ of the render function called **Context** which is  a _dictionary_ . It will contain all the info (variables) that I wanna provide the template. Where the key will be variable name and value can be anything, like an input of the function.
###### **Inserting variables :**
- We'll use double curly brackets `{{}}` inside the HTML file to insert the variable we wanna plugin.
```python title:project/app/views.py
def greet(request, name):
    return render(request, "app/greet.html", {
        "name": name.capitalize()
    })
```

```html title:project/app/templates/app/greet.html
<!DOCTYPE html>8
<html lang="en">
    <head>
        <title>Hello</title>
    </head>
    <body>
        <h1>Hello, {{ name }}!</h1>
    </body>
</html>
```
###### **inserting logic :**
-  We'll use `{% %}` for any logical sentence like conditions and loops.
- Example: New year verifier 
	![[Note-CS50W-Lec3-Django#^42427a]]
	![[Note-CS50W-Lec3-Django#^9f6861]]
	![[Note-CS50W-Lec3-Django#^9302f1]]
- unlike python, we don't have indentation in django, so we have to add `{% endif %}` at the end of condition. Same way we have to end 'for loop' with `{% endfor %}`.
#### Styling
![[Note-CS50W-Lec3-Django#Styling|Adding styles]]
### Template inheritance (Layout)
When we have to use same things in multiple HTML file,with Django we can use one as a template or layout for others to inherit from.
- Make the general HTML file from (which to copy from) in the app with a name eg. `layout.html`. Write the common html structure.Then in the changable part add `{% block body %}` and `{% endblock %}`
	Example: for a task app ![[Note-CS50W-Lec3-Django#^aa41ef]]
- in the file you wanna paste the layout, write `{% extends "appname/layout.html" %}` at the beginning. Then add `{% block body %}`, write the changes, end with `{% endblock %}`.
	![[Note-CS50W-Lec3-Django#^7a718f]]
### Flexible Linking in HTML
- Now, if we want to link a file to the html with `a` tag, we dont wanna hardcode it into the file as it kills Django's flexibility. 
- Instead, we'll use Django's feature `{% url "name" %}` which uses the [[Note-CS50W-Lec3-Django#^086ef2|name]] we assigned to a path earlier while writing views.
- This will link that path.
##### Namespace collision
- When two things have a same name, there will be a collision when we try to go to the link.
- we avoid this by specifying the app-name with a string called `app_name`.
	![[Note-CS50W-Lec3-Django#^49e79e]]
- Now in that html file use that string like `{% url "app_name:name" %}` to specify the link to that app.
	![[Note-CS50W-Lec3-Django#^549490]]

### Forms
We use [[HTML & CSS-CS50-vid#^4911dd|action]] attribute in form tag to mention the url or path where to submit the form data. Here we can use above flexible linking for the path.
#### Post
For submitting form data, we generally use `post` method instead of `get` .As it doesnt include parameters to the end of the url. But while submitting the form, you'll stumble upon this error: _CSRF varification failed._
###### [[Note-CS50W-Lec3-Django#^484782|CSRF (Cross-Site Request Forgery)]]
![[Note-CS50W-Lec3-Django#^bedf53]]
- Add `{% csrf_token %}` into that html file, under the `form` tag.
### Django Forms
To make creating forms easier, Django has its own thing.
- import it with `from django import forms.`
- `forms.Form` is a django class that knows how to create and validate HTML forms. Here, we'll make a python Class and then make it inherit from `forms.Form`.
- 
- 


---
>[!note] Note:
>Try to avoid *Hard-coding* in Django. It kills its changability or flexibility.

[^1]: HttpResponse is a special class created by Django, so we have to import it
