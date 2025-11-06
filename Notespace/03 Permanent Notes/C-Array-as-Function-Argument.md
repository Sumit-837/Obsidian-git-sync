If array is used as a function argument, it decays into a pointer pointing the first element.
```c
int avgarr(int arr[]);
//is functionally same as,
int avgarr(int *arr);
```
- because of this decay you cant get its size via any function, You have to take size as different parameter if needed.
	```c
int avgarr(int arr[], int size);
	```
- including array-size as argument is pointless:
	```c
	int avgarr(int arr[5]);
	//will eventually decay to:
	int avgarr(int *arr);
	```
---
Related: [[Note-CS3101-Pointers(inc)#^70c60c|Array acting as pointers ?]]
