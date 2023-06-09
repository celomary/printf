#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

#define STD_OUTPUT 1
#define AVAILABLE_CONVERSION "csdi%"
void	_putchar(char);
int		_is_inset(char, const char *);
int		_put_number(long int number, int *is_space);
int		_put_string(const char *s);
int		_conversion_handler(va_list *ap, char conversion, int *is_space);
int		_printf(const char *, ...);
#endif /* MAIN_H */
