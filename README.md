# Projet printF
## Table of content

[What is this project ?](#What-is-this-project)

[Building](#Building)

[Usage](#Usage)

[Description of the file structure](#Description-of-the-file-structure)

[Quick description of each function by file](#Quick-description-of-each-function-by-file)

[Usage](#Usage)

[Contributor](#Contributor)

### What is this project 😀

The aim of this project is to code a version based on the  original printf function of the standard library <stdio.h>.
As it's a learning exercise, some functions and requirements are added to the original printf.

### Building

1 - Download the folder

2 - Compile with a compiler. 
`gcc *.c`

### Usage

To use the core function called _printf, you can call it like the original printf, see man printf for more information.

For example, to display a string and replace the %s by passed argument. If argument string1 = "Boad" and argument  string2 = "Plane".

_printf("My first string %s, my second string %s"), string1, string2);

Will display:

`My first string Boad, my second string Plane`

You can replace <%s> <%option> where option is any option of the man pages.

### Description of the file structure
| FileName | Description |
|---|---|
| man_3_printf  | This file contain the man pages of the printf function.  |
| holberton.h  | This file is the header file.  |
| _printf.c  | This file contains the core function _printf. |
|  getPrint.c | This file contains the getPrint function used to find and call the needed function. It was created in order to make the code easier to read. |
| _put.c  | This file contains the _putchar and _puts functions.  |
| printAlpha.c  | This file contains all the string function : printChar, printStr, printModulo.  |
| printAlpha_2.c | This file contains other string function : printReverse, printRot13, checkPrintChar, convertHexTwoChar, printS.  |
| printBases.c  | This file contains all conversion functions : printAddr, printHexL, printHexU, printOctal, printBinary.  |
| printAlpha.c  | This file contains all the string function : printChar, printStr, printModulo.  |
| printNum.c  | This file contains all the printed number functions: printUnsigned and printInt. It also contain a converter from base 10 to a choosen base. |

### Quick description of each function by file

| File Name  | Function Name | Function Description  |
|---|---|---|
| _printf.c  | _printf  | Core function used to print into the standard output a string in which we can add some option like %s, %c... which refered to the passed arguments. See usage for more information.  |
| _put.c  |  _putchar |  Function to display a character in the standard output. This function handle a buffer of size 1024 to optimize the printf function. |
|   | _puts  |  Function to display a string in the standard output.
| getPrint.c  | getPrint | Function which will select the good function depending of the passed option (selected with eh %) in the printf function.  |
|   | getFlags  | Function which detect the flags |
| printAlpha.c  | printChar  | Function used for the option %c in order to display a char.  |
|   | printStr  | Function used for the option %s in order to display a string.  |
|   |  printModulo | Function used for the option %% in order to display a %. This option is deprecated and is now handle if the core function _printf.  |
| printAlpha_2.c  | printReverse  | Function used for the option %r in order to reverse a string.  |
|   | printRot13  | Function used for the option %R in order to encrypte a string with the rot13 encryption ( rotate of + 13 character char, for example 'a' become 'n'.  |
|   |  checkPrintChar | This function is used with the printS function inorder to know if a char can be printed or not.  |
|   |  convertHexTwoChar |  This function is used with the printS function in order to convert a decimal number into an hexadcimale number of 2 character. |
|   |  printS | Function used for the option %S in order to convert any non printable characters into \x followed the ASCII code value in hexadecimal.  |
| printBases.c  | printAddr  | Function used for the option %p to print an adress.  |
|   |  printHexL | Function used for the option %x to convert a number in decimal to its hexadecimal value in lowercase.  |
|   | printHexU  | Function used for the option %X to convert a number in decimal to its hexadecimal value in uppercase.  |
|   | printOctal  | Function used for the option %o to convert a number in decimal to its octale value.  |
|   | printBinary  | Function used for the option %b to convert a number in decimal to its binary value.  |
| printNum.c  | printUnsigned  | Function used for the option %u to print an unsigned number.  |
|   | convert  | Function used by all the conversion functions and the printS function, in order to convert a decimal number into a choosen bases, handle until base 16.  |
|   | printInt  | Function used for the option %i or %d in order to print an integer.  |

### Contributor
This project was created by Huy Nguyen and Olivier Guyot for Holberton school.
