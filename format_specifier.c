#include "main.h"
/**
 * printChar - prints the character
 *
 * @list: arguments
 *
 * Return: all the printed characters
 */
int printChar(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * printString - prints a string
 *
 * @list: argument's list
 *
 * Return: all characters printed
 */
int printString(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
