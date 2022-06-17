#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ing;

	while (str[ing] != '\0')
	{
		write(1, (str + ing), 1);
		ing++;
	}
}
int	main(void)
{
	char	t[] = {"Hello\n"};

	ft_putstr(t);
	return (0);
}
