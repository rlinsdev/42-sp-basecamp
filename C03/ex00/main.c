/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:06:59 by rlins             #+#    #+#             */
/*   Updated: 2022/02/16 18:05:05 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char	str1[] = "abcdef";
	//char	str2[] = "abcdef";

	// char	str1[] = "abcdef"; 
	// char	str2[] = "ABCDEF";

	// char	str1[] = "ABCDEF";
	// char	str2[] = "abcdef";

	char	str1[] = "ABCDEF";
	char	str2[] = "ABCDEE";

	// Resultados em ASCII
	// printf("%d",str1[0]);
	// printf("%d",str1[1]);

	printf("Resultado do ex: %d \n", ft_strcmp(str1, str2));
	printf("Resultado chamando original (strcmp): %d \n", strcmp(str1, str2));
}
