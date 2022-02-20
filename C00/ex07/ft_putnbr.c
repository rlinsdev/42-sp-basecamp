/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:31:50 by rlins             #+#    #+#             */
/*   Updated: 2022/02/09 12:42:52 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char n)
{
	write (1, &n, 1);
}

void	ft_putnbr(int nbrParam)
{
	long	nblong;
	int		i;
	char	c[10];

	nblong = nbrParam;
	if (nblong == 0)
		ft_print('0');
	i = 0;
	if (nblong < 0)
	{
		ft_print('-');
		nblong = nblong * -1;
	}
	while (nblong > 0)
	{
		c[i] = nblong % 10 + 48;
		nblong = nblong / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_print(c[i]);
		i--;
	}		
}
