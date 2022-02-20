/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoiEXPLICADO.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:50:49 by rlins             #+#    #+#             */
/*   Updated: 2022/02/16 22:50:58 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	mult;

	i = 0;
	nb = 0;
	mult = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
			{
				mult = mult *-1;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			nb = (nb * 10) + (str[i] - 48);
		}
		else
		{
			str[i + 1] = '\0';
		}
		i++;
	}

	nb = nb * mult;

	return (nb);
}
