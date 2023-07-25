#include "main.h"
/**
*spIndex - fun that the index of the special char from the
*array of str
*@ch: char we want to know its index
*@p: pointer to array of struct that we search in
*Return: index, NULL otherwise
*/
int spIndex(char ch, struct sp_char *p)
{
	int i;

	for (i = 0; (p + i)->ch != '\0'; i++)
	{
		if (ch == (p + i)->ch)
			return (i);
	}
	return (-1);
}

/**
*signIndex - fun that the index of the flag
*@ch: char we want to know its index
*@p: pointer to array of struct that we search in
*Return: index, NULL otherwise
*/
int signIndex(char ch, struct signs *p)
{
	int i;

	for (i = 0; (p + i)->ch != '\0'; i++)
	{
		if (ch == (p + i)->ch)
			return (i);
	}
	return (-1);
}
