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

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
	i--;
	}
}
