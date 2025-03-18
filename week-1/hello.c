// #include <cs50.h>
#include <stdio.h>
// header file => if we don't use #include <stdio.h> we can't access to library
//  Library ? A library is a collection of code that someone else wrote for you.
//  printf in the library

// make hello or make hello.c => That's going to translate your source code into ones and zeroes.
// make represents the compiler, so to speak, the program that converts source code to machine code.

// code hello.c
// make hello
// ./hello

int main(void)
{
    // \n for go next line
    printf("hello, \"world!\"\n");

    // return strings and type is string
    // string answer = get_string("What's your name?");
    // printf("hello,%s\n", answer);

}

// arguments -> function -> side effects

/*
\n => It moves the cursor to the start of the next line.
\r => It moves the cursor to the start of the current line.
\" => It is used to display double quotation marks.
\' => It is used to display a single quotation mark.
\\ => Use to insert backslash character.

cs50.h
get_char ->  prompt a user for a char
get_double ->  prompt a user for a double
get_float ->  prompt a user for a float
get_int ->  prompt a user for an int
get_long ->  prompt a user for an long
get_string ->  prompt a user for a string


commend line
cd => for change directory, which is the command equivalent of double-clicking on a folder to open it up in a graphical environment.
cp => which is short for copy, which allows you to make a copy of a file or folder.
ls =>  simply short for list, which shows you the files in your current folder.
mkdir => which is short for make directory, which is how you could make a new folder.
mv => which is short for move, which would allow you to move one file or folder from one place to another or simply rename one of
those to a different name. rm => which is short for remove. rmdir => which is short for remove directory.


type:
bool => true false
char => single charecters
double => real numbers
float => real numbers
int =>number
long => long number
string => text

format codes:
%c
%f
%i => If we want to place int
%li
%s => If we want to place string

conditionals:
1.
if (x < y)
{
    printf("x is less than y\n")
}
else{
    printf("x is not less than y\n")
}

2.
if(x<y){
    printf("x is not less than y\n")
}
else if(x > y){
    printf("x is greater than y\n")
} else if (x == y){
    printf("x is equal to y\n")
}

3.
if(x<y){
    printf("x is not less than y\n")
}
else if(x > y){
    printf("x is greater than y\n")
} else {
    printf("x is equal to y\n")
}

operators:
=
<
<=
>
>=
!=
==

variables:
int counter = 0;
conunter = counter + 1;
counter += 1;
counter++;
counter--;


*/
