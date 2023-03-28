#include "main.h"
/**
 * _printf - function that produce output according to the format
 *
 * @format: the format to follow
 * Return: the length of printed args
 */
int	_printf(const char *format, ...)
{
	va_list ap;
	int		printed;
	int		iterator;

	if (format == NULL)
		return (-1);
	printed = 0;
	iterator = 0;
	va_start(ap, format);
	while (format[iterator])
	{
		if (format[iterator] == '%')
		{
			if (_is_inset(format[iterator + 1], AVAILABLE_CONVERSION))
			{
				iterator++;
				printed += _conversion_handler(&ap, format[iterator]);
			}
			else
			{
				_putchar(format[iterator]);
				printed++;
			}
		}
		else
		{
			_putchar(format[iterator]);
			printed++;
		}
		iterator++;
	}
	va_end(ap);
	return (printed);
}
