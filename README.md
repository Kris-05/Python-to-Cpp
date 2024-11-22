# Python-to-Cpp
## Overview
Our "Python to C++ Code Converter" is designed for the translation of Python code into its equivalent C++ code. It supports fundamental programming constructs such as:

- Assignment statements
- Print statements
- Conditional statements
- Loops
- Switch cases
- Functions

**Note:** Grammar for the following features is not yet implemented:
- Comments
- Function hoisting
## Create Lex file
```
vim cd_project.l
lex cd_project.l
```
## Create Yacc file
```
vim cd_project.y
yacc -d cd_project.y
```
## To Run
```
g++ -o <name> lex.yy.c y.tab.c
./<name> <input_file>.py
```
