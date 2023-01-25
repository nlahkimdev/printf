#include "main.h"
/**
 * print_char - prints the character
 *
 * @list: arguments
 *
 * Return: all the printed characters
 */
int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints a string
 *
 * @list: argument's list
 *
 * Return: all characters printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}
