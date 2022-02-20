/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:49:20 by rlins             #+#    #+#             */
/*   Updated: 2022/02/16 18:03:43 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//unsigned	qtd = 6; // Comparando os 6 caracteres, fudeu. o sexto caracter é diferente dos 2 arrays [E][F]
	unsigned	qtd = 5; // Comparando 5 strings só, dá zero, certinho. Idênticos.
	char	str1[] = "ABCDEF";
	char	str2[] = "ABCDEE";

	printf("Resultado do ex: %d \n", ft_strncmp(str1, str2, qtd));
	printf("Resultado chamando original (strncmp): %d \n", strncmp(str1, str2, qtd));
}
