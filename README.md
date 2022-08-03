#SIMPLE SHELL PROJECT

Developed by Marcelo Casaña and Felippe Mari for Holberton School Uruguay.

## DESCRIPTION

The project is a reproduction of a standard command interpreter for the system.
Written in C and compiled on Ubuntu 20.04 LTS using GCC version 9.4.0.

What does it do
How to use it

## COMPILATION

Program is compiled on Ubuntu 20.04 LTS with the following command:

	$ gcc -Wall -Werror -Wextra -pedantiic -std=gnu89 *.c -o hsh

# FILES & FUNCTIONS

`shell.c` - main program

## EXAMPLE

-----Interactive mode:-----

.I $ ./hsh
.I ($) /bin/ls
.I hsh main.c shell.c
.I ($)
.I ($) exit
.I $

-----Non-interactive mode:-----

.I $ echo "/bin/ls" | ./hsh
.I hsh main.c shell.c test_ls_2
.I $
.I $ cat test_ls_2
.I /bin/ls
.I /bin/ls
.I $
.I $ cat test_ls_2 | ./hsh
.I hsh main.c shell.c test_ls_2
.I hsh main.c shell.c test_ls_2
.I $

## FLOWCHART

![flowchart](Coming soon...)


