# PrintF
### WHAT IS THIS PROJECT

The aim of this project is to code a version based on the  original printf function of the standard library <stdio.h>.
As it's a learning exercise, some function and requirement are added to the original printfl.

### HOW TO READ THE README

The main structure part describe all the different file and associated functions.

The quick description part is an overview of all the used functions.

the usage part is the how to use the _printf function with example. 

You can have other information by reading the`man_3_printf` pages with the man function.

### MAIN STRUCTURE
`man_3_printf`

This file contain the man pages of the printf function.

`holberton.h`

This file contain all the prototype of the used function.

`_printf.c`

This file contain the core function _printf.

`getPrint.c`
This file contain the getPrint function used to find and call the needed function. It was created in order to make the code easier to read.

`_put.c`
	This file contain the _putchar and _puts functions.
[printAlpha.c]
	This file contain all the string function : printChar, printStr, printModulo.
[printAlpha_2.c]
	This file contain other string function : printReverse, printRot13, checkPrintChar, convertHexTwoChar, printS.
[printBases.c]
	This file contain all conversion functions : printAddr, printHexL, printHexU, printOctal, printBinary.
[printNum.c]
	This file contain all the printed number functions: printUnsigned and printInt. It also contain a converter from base 10 to a choosen base.

### QUICK DESCRIPTION OF EACH FUNCTION BY [FILE]
[_printf.c]
	_printf : Core function used to print into the standard output a string in which we can add some option like %s, %c... which refered to the passed arguments. See usage for more information.

[_put.c]
	_putchar : Function to display a character in the standard output. This function handle a buffer of size 1024 to optimize the printf function.
	_puts : Function to display a string in the standard output.
getPrint.c
	getPrint : Function which will select the good function depending of the passed option (selected with eh %) in the printf function.
	getFlags : ??
[printAlpha.c]
	printChar : Function used for the option %c in order to display a char.
	printStr : Function used for the option %s in order to display a string.
	printModulo : Function used for the option %% in order to display a %. This option is deprecated and is now handle if the core function _printf
[printAlpha_2.c]
	printReverse : Function used for the option %r in order to reverse a string.
	printRot13 : Function used for the option %R in order to encrypte a string with the rot13 encryption ( rotate of + 13 character char, for example 'a' become 'n'.
	checkPrintChar : This function is used with the printS function inorder to know if a char can be printed or not.
	convertHexTwoChar : This function is used with the printS function in order to convert a decimal number into an hexadcimale number of 2 character.
	printS : Function used for the option %S in order to convert any non printable characters into \x followed the ASCII code value in hexadecimal.
[printBases.c]
	printAddr: Function used for the option %p to print an adress.
	printHexL: Function used for the option %x to convert a number in decimal to its hexadecimal value in lowercase.
	printHexU: Function used for the option %X to convert a number in decimal to its hexadecimal value in uppercase.
	printOctal: Function used for the option %o to convert a number in decimal to its octale value.
	printBinary: Function used for the option %b to convert a number in decimal to its binary value.
[printNum.c]
	printUnsigned : Function used for the option %u to print an unsigned number.
	convert : Function used by all the conversion functions and the printS function, in order to convert a decimal number into a choosen bases, handle until base 16.
	printInt : Function used for the option %i or %d in order to print an integer.
### USAGE
Compile all the .c file with the gcc.
There is no main file so, if you needed to test it, you have to create one. A folder main_test contain some main function to test the program, it s not exhaustive and not maintained.

To use the core function called _printf, you can call it like the original printf, see man printf for more information.
For example, to display a string and replace the %s by passed argument. For example, if argument string1 = "Boad" and argument  string2 = "Plane".
You can call :
	_printf("My first string %s, my second string %s"), string1, string2);
The function will display:
	My first string Boad, my second string Plane
You can replace <%s> <%option> where option is any option of the man pages.

### CONTRIBUTOR
This project was created by Huy Nguyen and Olivier Guyot for Holberton school.
