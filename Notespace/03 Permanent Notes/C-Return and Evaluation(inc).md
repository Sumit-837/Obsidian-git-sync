```c
int f(int a) {
	return a + 1; //gives incremented value
}
int g(int a) {
	return ++a; // also gives incremented value
}
//but
int h(int a) {
	return a++; //gives old value (a).
}

```
its because `++` is an operation with side effect while  `a+1` is a pure expression.
- in the case of `a++` it returns the a then increments it.
- but in case of `++a` it increments first and then returns.