# Python-to-Cpp
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
