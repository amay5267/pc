/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xxxx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxx <xxxxxx@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: xxxx/xx/xx xx:xx:xx by xxxxx             #+#    #+#             */
/*   Updated: xxxx/xx/xx xx:xx:xx by xxxxx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_char(char n, char i, char s)
{
	ft_putchar(n);
	ft_putchar(i);
	ft_putchar(s);
	if (!(n == '7' && i == '8' && s == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	n;
	char	i;
	char	s;

	n = '0';
	while (n <= '7')
	{
		i = n + 1;
		while (i <= '8')
		{
			s = i + 1;
			while (s <= '9')
			{
				print_char(n, i, s);
				s++;
			}
			i++;
		}
		n++;
	}
}
