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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	swap;

	i = 0;
	while (i < size)
	{
		s = 0;
		while (s < (size - 1))
		{
			if (*(tab + i) < *(tab + s))
			{
				swap = *(tab + i);
				*(tab + i) = *(tab + s);
				*(tab + s) = swap;
			}
			s++;
		}
		i++;
	}
}
