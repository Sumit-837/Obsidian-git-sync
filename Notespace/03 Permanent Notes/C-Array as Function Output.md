Tags: [[C]]

---
As we know, arrays act as pointers so if we want to get array as function output, we may declare the function output like:
```c
int *function(type arguments, ...);
```
But then we have to deal with memory allocation and pasting that into main's array and stuff. **That's hectic**. 

Instead, as we know Arrays decays into pointers when taken as function arguments, we can take an array from main as argument of our function, modify it and use it so store our output value. Then the value will be still there in main as its [[Note-CS3101-Pointers(inc)#2. Call by reference|calling by reference(pointers)]].
```c
void function(int *arr, int a, ...) {
	arr[0] = 999;
}
```