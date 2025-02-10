#include <stdarg.h>
#include <unistd.h>

static int ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static int ft_putstr(char *s)
{

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

int ft_printf(const char *fmt, ...)
{
	va_list args;
	int count = 0;
	va_start(args ,fmt);

	while (*fmt)
	{
		if (*fmt = '%' && (format + 1)) //checking for the flag and if there is anything after the flag
		{
			format++; // making the current target be the flag specifier

		}
	}
}
