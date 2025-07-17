# Python-to-Cpp

## Contributors

Krisna VJ - 2022103543
Balamurugan S - 2022103544

## Overview

Our "Python to C++ Code Converter" is designed for the translation of Python code into its equivalent C++ code. It supports fundamental programming constructs such as:

- Assignment statements for basic datatypes (int, float, string)
- Print statements
- Conditional statements (if-elif-else)
- Loops (for, while)
- Switch cases
- Functions

**Note:** Grammar for the following features is not yet implemented:

- Comments
- Function hoisting
- Class & Objects

## Demo

[Demo Video](https://drive.google.com/file/d/1im8iIbC9sXzruylLwX_nygQazFxKYBCG/view)

## Implementation

Using Lex and Yacc for lexical analysis and parsing, our converter tokenizes Python code and constructs a parse tree to ensure accurate syntax conversion into C++. Key differences in syntax, such as indentation in Python versus curly braces in C++, are handled with precision.

### Create Lex file

```
vim cd_project.l
lex cd_project.l
```

### Create Yacc file

```
vim cd_project.y
yacc -d cd_project.y
```

### To Run

```
g++ -o <name> lex.yy.c y.tab.c
./<name> <input_file>.py
```
