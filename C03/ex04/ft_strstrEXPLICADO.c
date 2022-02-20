/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrEXPLICADO.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:20:27 by rlins             #+#    #+#             */
/*   Updated: 2022/02/16 19:28:59 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			//printf("%d", *str); //80 == "P"
			i = 0;
			tmp = 0;
			// printf("III: %d \n", i); // == 0;
			while (to_find[i] != '\0')
			{
				//printf("C - %s \n", str);
				printf("A: %s \n", &str[i]);
				printf("B: %s \n", &to_find[i]);
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			//printf("?: %d \n", tmp);
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
