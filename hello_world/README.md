<h1 align="center"> C - Hello World </h1>

### Recommended Links 🔗

- [Learning to Program in C](https://www.youtube.com/watch?v=rk2fK2IIiiQ) *[by Jonathan Engelsma](https://www.youtube.com/@JonathanEngelsma)*
- [Learning to Program in C](https://www.youtube.com/watch?v=FwpP_MsZWnU) *[by Jonathan Engelsma](https://www.youtube.com/@JonathanEngelsma)*

### Learning Objectives 🎯

- Why C programming is awesome
- Who invented C
- Who are *__Dennis Ritchie__*, *__Brian Kernighan__* and *__Linus Torvalds__*
- What happens when you type `` gcc main.c``
- What is an entry point
- What is ``main``
- How to print text using ``printf``, ``puts`` and ``putchar``
- How to get the size of a specific type using the unary operator ``sizeof``
- How to compile using ``gcc``
- What is the default program name when compiling with ``gcc``
What is the official C coding style and how to check your code with ``betty-style``
- How to find the right header to include in your source code when using a standard library function
- How does the ``main`` function influence the return value of the program

### Tasks 📚


__0. Preprocessor__
- Write a script that runs a C file through the preprocessor and save the result into another file.
	- The C file name will be saved in the variable ``$CFILE``
	- The output should be saved in the file `` c``

__1. Compiler__
- Write a script that compiles a C file but does not link.
	- The C file name will be saved in the variable ``$CFILE``
-	The output file should be named the same as the C file, but with the extension ``.o`` instead of ``.c``
		- Example: if the C file is ``main.c``, the output file should be ``main.o``

__2. Assembler__
- Write a script that generates the assembly code of a C code and save it in an output file.
	- The C file name will be saved in the variable ``$CFILE``
	- The output file should be named the same as the C file, but with the extension ``.s`` instead of ``.c``.
	- Example: if the C file is ``main.c``, the output file should be ``main.s``

__3. Name__
- Write a script that compiles a C file and creates an executable named ``cisfun``.
	- The C file name will be saved in the variable ``$CFILE``

__4. Hello, puts__
- Write a C program that prints exactly ``"Programming is like building a multilingual puzzle``, followed by a new line.
	- Use the function ``puts``
	- You are not allowed to use ``printf``
	- Your program should end with the value ``0``

__5. Hello, printf__
- Write a C program that prints exactly ``with proper grammar, but the outcome is a piece of art,``, followed by a new line.
	- Use the function ``printf``
	- You are not allowed to use the function ``puts``
	- Your program should return ``0``
	- Your program should compile without warning when using the ``-Wall gcc`` option

__6. Size is not grandeur, and territory does not make a nation__
- Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return ``0``
- You might have to install the package ``libc6-dev-i386`` on your Linux (Vagrant) to test the ``-m32 gcc`` option

