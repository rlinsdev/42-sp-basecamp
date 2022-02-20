/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:51:05 by rlins             #+#    #+#             */
/*   Updated: 2022/02/09 15:07:57 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char f, char s)
{
	write(1, &f, 1);
	write(1, &s, 1);
}

void	ft_print_combn(int n)
{
	char	first;
	char	second;

	if (n == 2)
	{
		first = '0';
		while (first <= '9')
		{
			second = first + 1;
			while (second <= '9')
			{			
				ft_print(first, second);
				if (!(first == '8' && second == '9'))
				{
					write(1, ", ", 2);
				}				
				second++;
			}
			first++;
		}
	}		
}
