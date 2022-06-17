#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		num = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
	{
		num = (unsigned int)(nb);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
	}
}

int	main(void)
{
	ft_putnbr(7);
}
