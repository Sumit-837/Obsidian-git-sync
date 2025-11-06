---
title: Trick to initialise un-sized array of sized arrays
subject: C-programming
source: "[[C-Array-of-Strings#page=26|CS3101-problem-S4-Q2]]"
---
****
While initialising 2D arrays, we found
![[Note-CS3101-Arrays#^6619b9]]

- The trick is When you have to create a 2D array where each sub-list/ string can be a different size, **you can declare an array of pointers**. e.g.
	`char *usernames[] = {"kripa", "ayan", "doi"}`
	This declares an array named `usernames`, where each element is a pointer (`usernames[0]`,`usernames[1]`,...)pointing to the first elements of the strings `"kripa"`,`"ayan"` and `"doi"`.
- As we know, pointers of arrays at some extent acts like arrays. And also the [[[[(8)arrays_strings.pdf#page=21|functions from <string.h>]] converts their argument arrays into pointers before acting, those pointers you declared can be used in the place of strings they are pointing.
---
references:
- [[Note-CS3101-Arrays#Initialisation of 2D array]]
- [[Note-CS3101-Pointers(inc)#^70c60c]]
