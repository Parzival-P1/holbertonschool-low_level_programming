<h1 align="center"> C - Variadic functions </h1>

### Recommended Links 🔗

__Concepts & examples__
- [How to create functions with a variable number of arguments using stdarg.h](https://www.youtube.com/watch?v=3iX9a_l9W9Y)

- [Variadic Functions in C Programming ](https://www.youtube.com/watch?v=Lh7xydr8zzU&t=123s)

### Learning Objectives 🎯

- What are variadic functions
- How to use va_start, va_arg and va_end macros
- Why and how to use the const type qualifier	

### Tasks 📚

__1. To be is to be the value of a variable__

- Write a function that prints numbers, followed by a new line.
	- Prototype: ``void print_numbers(const char *separator, const unsigned int n, ...);``
	- where ``separator`` is the string to be printed between numbers
	- and ``n`` is the number of integers passed to the function
	- You are allowed to use ``printf``
	- If ``separator`` is ``NULL``, don’t print it
	- Print a new line at the end of your function

__2. One woman's constant is another woman's variable__

- Write a function that prints strings, followed by a new line
	- Prototype: ``void print_strings(const char *separator, const unsigned int n, ...);``
	- where ``separator`` is the string to be printed between the strings
	- and ``n`` is the number of strings passed to the function
	- You are allowed to use ``printf``
	- If separator is NULL, don’t print it
	- If one of the string is NULL, print ``(nil)`` instead
	- Print a new line at the end of your function

__3. To be is a to be the value of a variable__

- Write a function that prints anything.
	- Prototype: ``void print_all(const char * const format, ...);``
	- where ``format`` is a list of types of arguments passed to the function
		- ``c: char``
		- ``i: integer``
		- ``f: float``
		- ``s: char *`` (if the string is NULL, print ``(nil)`` instead
		- any other char should be ignored
		- see example
	- You are not allowed to use ``for``, ``goto``, ternary operator, ``else``, ``do ... while``
	- You can use a maximum of
		- 2 ``while`` loops
		- 2 ``if``
	- You can declare a maximum of ``9`` variables
	- You are allowed to use ``printf``
	- Print a new line at the end of your function

