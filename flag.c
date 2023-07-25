#include "main.h"
/**
*postive_sign - fun to print the + flag
*@flag: flag to can overwide the flags
*@ch: the + char
*@j: the index of the argument
*@ap: the copy of the argument list
*@pCount: the count of the str
*/
void postive_sign(int flag, char ch, int j, va_list ap, int *pCount)
{
	if (flag < 2 || (j == 2 || j == 3 || j == 12))
	{
		if (ch == '+' && (j == 2 || j == 3 || j == 12))
		{
			if (va_arg(ap, int) >= 0 || j == 12)
			{
				_putchar('+');
				*pCount += 1;
			}
		}
	}
	else
	{
		window_sign(flag, '#', j, ap, pCount);
	}
}
/**
*space_sign - fun to print the space flag
*@flag: flag to can overwide the flags
*@ch: the + char
*@j: the index of the argument
*@ap: the copy of the argument list
*@pCount: the count of the str
*/
void space_sign(int flag, char ch, int j, va_list ap, int *pCount)
{
	if ((ch == ' ' && (j == 2 || j == 3 || j == 12)) && flag == 0)
	{
		if (va_arg(ap, int) >= 0 || j == 12)
		{
			_putchar(' ');
			*pCount += 1;
		}
	}
	else if (flag <= 2 && (j == 2 || j == 3 || j == 12))
	{
		_putchar('+');
		*pCount += 1;
	}
	else if (flag == 2 && !(j == 2 || j == 3 || j == 12))
	{
		window_sign(flag, '#', j, ap, pCount);
	}

}
/**
*window_sign - fun to print the windoflag
*@flag: flag to can overwide the flags
*@ch: the + char
*@j: the index of the argument
*@ap: the copy of the argument list
*@pCount: the count of the str
*/
void window_sign(int flag, char ch, int j, va_list ap, int *pCount)
{
	if (va_arg(ap, int) != 0)
	{
		if (flag > 1 && !(j == 2 || j == 3 || j == 12))
		{
			if (ch == '#' && j == 7)
			{
				_putchar('0');
				*pCount += 1;
			}
			else if (ch == '#' && j == 9)
			{
				_putchar('0');
				_putchar('x');
				*pCount += 2;
			}
			else if (ch == '#' && j == 10)
			{
				_putchar('0');
				_putchar('X');
				*pCount += 2;
			}
		}
		else if (flag < 2 && (j == 2 || j == 3 || j == 12))
		{
			_putchar('+');
			*pCount += 1;
		}
	}
}
