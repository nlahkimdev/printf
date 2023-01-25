include "main.h"

/**
  * _printf - Printf function
  *
  * @format: format
  *
  * Return: printed chars
  */
int _printf(const char *format, ...)
{
	int i, j, printed_chars;
	fs_t f_list[] = {
		{"c", print_char},
		{"s", print_string}
	};

	va_list arg_list;

	va_start(arg_list, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].fs != NULL; j++)
			{
				if (format[i + 1] == f_list[j].fs[0])
				{
					printed_chars += f_list[j].f(arg_list);
					break;
				}
			}
			i++;
		}
		else
		{
			_write_char(format[i]);
			printed_chars++;
		}
	}
	va_end(arg_list);
	return (printed_chars);
}
