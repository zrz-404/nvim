#include <stdarg.h>
#include <unistd.h>

static int ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static int ft_putstr(char *s)
{
	int len = 0;
	if (!s)
		s = "(null)";
	while (*s)
		len += write(1, s++, 1);
	return (len);
}

static int ft_putnbr(long n, int base, char *digits)
{
	int len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	if (n >= base)
		len += ft_putnbr(n / base, base, digits);
	return (len + write(1, &digits[n % base], 1));
}

int ft_printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && (format + 1))
		{
			format++;
			if (*format == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (*format == 'd')
				count += ft_putnbr(va_arg(args, int), 10, "0123456789");
			else if (*format == 'x')
				count += ft_putnbr(va_arg(args, unsigned int), 16, "0123456789abcdef");
			else
				count += ft_putchar(*format);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}

