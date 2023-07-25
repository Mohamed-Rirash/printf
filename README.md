# ALX Software Engineering Programme: Printf project

A program for converting formatted output in C, developed as part of the low-level programming and algorithm track at ALX Software Engineering Programme. The program emulates the C standard library function, `printf`.

## Dependencies

The `_printf` function was coded on an Ubuntu 20.04.1 LTS machine with `gcc` version 9.4.0.

## Usage

To use the `_printf` function, assuming the above dependencies have been installed,
compile all `.c` files in the repository and include the header `main.h` with
any main function.

Example `main.c`:
```
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```

Compilation:
```
$ gcc *.c -o tester
```

Output:
```
$ ./tester
Hello, World!
$
```

## Description 

The `_printf` function produces output to the standard output. It is directed by a `format` string that dictates the manner in which subsequent arguments (obtained through the variable-length argument capabilities of `stdarg`) are transformed for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value

When executed successfully, `_printf` returns the quantity of characters printed (not including the null byte utilized to finish output to strings). In the event of an output error, the function returns `-1`.

### Format of the Argument String

The `format` string argument is a fixed sequence of characters that may include zero or more instructions. Characters that are not `%` are replicated in their original form to the output stream. Conversion specifications, however, extract zero or more additional arguments. A conversion specification starts with the `%` character and ends with a conversion specifier. Between the `%` character and the conversion specifier, there could be (in order) zero or more _flags_, an optional minimal _field width_, an optional _precision_, and an optional _length_ modifier. The arguments must align with the conversion specifier and are processed in the order they are given.

#### Conversion Specifiers

The conversion specifier, which begins with the character `%`, is a character that determines the type of conversion to be executed. The `_printf` function can handle the following types of conversion specifiers:

#### [d, i](https://github.com/sayedali1/printf/blob/main/_putint.c)
The `int` argument is transformed into a signed decimal or integer representation.

Example `main.c`:
```
int main(void)
{
    _printf("%d\n", 7);
}
```
Output:
```
7
```

#### [b](https://github.com/sayedali1/printf/blob/main/print_bi.c)
The `unsigned int` argument is transformed into an unsigned decimal representation.

Example `main.c`:
```
int main(void)
{
    _printf("%b\n", 7);
}
```
Output:
```
111
```

#### [o](https://github.com/sayedali1/printf/blob/main/print_octal.c), [u](https://github.com/sayedali1/printf/blob/main/print_unsig.c), [x](https://github.com/sayedali1/printf/blob/main/print_lowerhex.c), [X](https://github.com/sayedali1/printf/blob/main/print_upperhex.c)
The `unsigned int` argument is transformed into an octal (`o`), decimal (`u`), or hexadecimal (`x` and `X`) representation without any sign. The letters `abcdef` are utilized for `x` conversions and the letters `ABCDEF` are used for `X` conversions.

Example `main.c`:
```
int main(void)
{
    _printf("%o\n", 77);
}
```
Output:
```
115
```

#### [c](https://github.com/sayedali1/printf/blob/main/_putchar.c)
The `int` argument is transformed into an `unsigned char` representation.

Example `main.c`:
```
int main(void)
{
    _printf("%c\n", 48);
}
```
Output:
```
0
```

#### [s](https://github.com/sayedali1/printf/blob/main/printstr.c)
The `const char *` argument is assumed to be a pointer to an array of characters (i.e., a pointer to a string). Characters from the array are written out starting with the first element of the array and ending at, but not including, the null byte terminator (`\0`).

Example `main.c`:
```
int main(void)
{
    _printf("%s\n", "Hello, World!");
}
```
Output:
```
Hello, World!
```

#### [r](https://github.com/sayedali1/printf/blob/main/print_rev.c)
Similar to the `s` conversion specifier, the `const char *` argument is assumed to be a pointer to an array of characters (i.e., a pointer to a string). However, in this case, characters from the array are written out in reverse order, starting with the null byte terminator (`\0`) and ending with the first element of the array.

Example `main.c`:
```
int main(void)
{
    _printf("r\n", "Hello, World");
}
```
Output:
```
dlroW ,olleH
```

#### [R](https://github.com/sayedali1/printf/blob/main/print_rot13.c)
The `const char *` argument is expected to be a pointer to an array of characters (i.e., a pointer to a string). However, in this case, each character of the array is transformed into its corresponding character in ROT13 encoding before being written out. The ROT13 conversion specifier is represented by `R`.

Example `main.c`:
```
int main(void)
{
    _printf("%R\n", "Hello, World");
}
```
Output:
```
Uryyb, Jbeyq
```

#### [p](https://github.com/sayedali1/printf/blob/main/print_addr.c)
The `p` conversion specifier is used to output the memory address of a pointer argument. The address is presented in hexadecimal format, which is a widely accepted representation of memory addresses. The address is preceded by the characters `0x` to indicate that it is in hexadecimal format. 

Example `main.c`:
```
int main(void)
{
    char *str = "Hello, World";

    _printf("%p\n", (void *)str);
}
```
Output:
```
0x561a6d7bab5d
```

#### [%](https://github.com/sayedali1/printf/blob/main/_printf.c)
The `%` conversion specifier is used to write out the character `%`. No argument is transformed, and the complete conversion specification is `%%`. This conversion specifier is useful in situations where the `%` character needs to be included in the output, but not as a conversion specifier.

Example:
```
int main(void)
{
    _printf("%%\n");
}
```
Output:
```
%
```
#### [flag (+,(space), #)](/flag.c)

`+` :Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a -ve sign.

`(space)`: If no sign is going to be written, a blank space is inserted before the value

`#` : Used with o, x or X specifiers the value is preceded with 0, 0x or 0X respectively for values different than zero. Used with e, E and f, it forces the written output to contain a decimal point even if no digits would follow. By default, if no digits follow, no decimal point is written. Used with g or G the result is the same as with e or E but trailing zeros are not removed.

## Authors

* [Sayed Ali](https://github.com/sayedali1)
* [Mohamed Reda](https://github.com/alexnder394)

## License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/sayedali1/printf/blob/main/LICENSE) file for details.

## Acknowledgements :pray:

The `_printf` function emulates functionality of the C standard library
function `printf`. This README borrows from the Linux man page
[printf(3)](https://linux.die.net/man/3/printf).

This program was written as part of the curriculum for ALX Software Engineering Programme.

The ALX Software Engineering Programme is a fully-funded scholarship programme. As part of the African Leadership Group, their mission is to transform the future of Africa by creating 2M job opportunities by 2030 for young African talent. For more information, visit [this link](https://www.alxafrica.com/).
