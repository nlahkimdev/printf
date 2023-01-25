#include "main.h"

/**
 * _write_char - writes character
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * return -1 on error
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
