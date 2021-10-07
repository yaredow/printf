![ALX softaware engineering school](https://theme.zdassets.com/theme_assets/10239256/f69718478ae7ecaaae43d9f8aefd9638c313b55e.jpg "ALX")
---
# printf
---
> write your own printf 
## Welcome
---
A rebuild of the standard printf function in C. printf returns the number of characters printed (excluding the null byte at the end of strings). We were not asked to handle flag characters, field width, precision, or length.
## ALX
---
In ALX school we rarely use the c standard library, instead we are advised to build our our function and header as we learn 

## Description
---
The function printf writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments (accessed via the variable-length argument facilities of stdarg) are converted for output.

## Prototype
> int _printf(const char *format, ...);

## Return Value

Upon successful return, _printf returns the number of characters printed

## Format of the Argument String
---
The format string argument is a constant character string composed of zero or more directives: ordinary characters (not %) which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Conversion specification is introduced by the character % and ends with a conversion specifier. In between the % character and conversion specifier, there may be (in order) zero or more flags, an optional minimum field width, an optional precision and an optional length modifier. The arguments must correspond with the conversion specifier, and are used in the order given.

### Format specifiers
---
| Type        | Output               |
| ----------- | -------------------- |
| c           | single character     |
| s           | string               |
| r           | string in reverse    |
| R           | string in rot13      |
| d           | integer in decimal   |
| i           | integer              |
| %           | percent sign         |
| x           | lowercase hex        |
| X           | uppercase hex        |
| b           | binary               |
| o           | octal                |
| u    	      | unsigned             |
| p           | pointer              |
| F           | expletive            |

### Examples
Character: printf("%c", 'Z'); Output:: Z

String: printf("%s", 'This is  ALX team project.'); Output: This is ALX team project.

Integer: printf("%i", 5); Output: 5


## Built With
---
- [UBUNTU](https://ubuntu.com/).
- [GitHub](https://github-dotcom.gateway.web.tr/).

## Project Requirements
---
- Allowed editors: **vi**, **vim**, **emacs**
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags **-Wall** **-Werror** **-Wextra** and **-pedantic**
- A **README.md** file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github-dotcom.gateway.web.tr/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github-dotcom.gateway.web.tr/holbertonschool/Betty/blob/master/betty-doc.pl).
- You are not allowed to use global variables
- In the following examples, the **main.c** files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own **main.c** files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called **main.h**
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the **_putchar** function for this project.

## Prototype
---
#include "main.h"
> int _printf(const char *format, ...);

## Compilation
---
> gcc -Wall -Werror -Wextra -pedantic *.c

## Authors
---
- [Yared Yilma](https://github.com/yaredow)
- [Abdisa Gemechu](https://github.com/abdisag1)

## Acknowledgements
---
This program was written with a team for ALX school. [ALX](https://www.alxafrica.com/) is African  Leadership Group which has partnerd withSilicon Valley leading tech training school, Holberton to provide a software engineering program for african youth. 
