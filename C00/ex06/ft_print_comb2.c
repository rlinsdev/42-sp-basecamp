/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:03:37 by rlins             #+#    #+#             */
/*   Updated: 2022/02/08 16:22:20 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char f, char s)
{
	write(1, &f, 1);
	write(1, &s, 1);
}

void	ft_manage_num(int number, int max)
{
	char	uni;
	char	dec;

	if (number <= 9)
	{
		uni = number + 48;
		ft_print('0', uni);
	}
	else if (number <= max)
	{
		uni = (number % 10) + 48;
		dec = (number / 10) + 48;
		ft_print(dec, uni);
	}
}

void	ft_format(int pri, int seg)
{
	ft_manage_num(pri, 98);
	write(1, " ", 1);
	ft_manage_num(seg, 99);
	if (!(pri == 98 && seg == 99))
	{
		ft_print(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_format(first, second);
			second++;
		}
		first++;
	}
}
