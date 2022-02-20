/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:27:30 by marvin            #+#    #+#             */
/*   Updated: 2022/02/18 19:27:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlength (char *str)
{
	int	i;

	i = 0;
	while (*str !='\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{

}

void ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	char	nbr_c[32];


	if (nbr < 0)
	{
		ft_putchar('-');
		nbr_l = nbr * -1;
	}
	else
		nbr_l = nbr;

	while (nbr_l > 0)
	{
		nbr_c[i] = base[nbr_l % base_divider];

		printf(nbr_c[i]);

		i++;

	}
	


}