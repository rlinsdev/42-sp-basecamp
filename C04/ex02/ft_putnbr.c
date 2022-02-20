/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:22:07 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 19:41:26 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c[10];
	long	nmb_long;

	nmb_long = nb;
	if (nmb_long == 0)
		ft_putchar('0');
	if (nmb_long < 0)
	{
		nmb_long = nmb_long * -1;
		ft_putchar('-');
	}
	i = 0;
	while (nmb_long > 0)
	{
		c[i] = nmb_long % 10 +48;
		nmb_long = nmb_long / 10;
		i++;
	}	
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}
