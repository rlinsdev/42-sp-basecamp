/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:44:14 by rlins             #+#    #+#             */
/*   Updated: 2022/02/16 23:07:14 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ft_atoi.c"

int	main(void)
{
	int		val;
	int		val_new;
	char	str[20];

	// // 7) Teste do pdf
	// strcpy(str, "82156a9abbbb");
	// val = atoi(str);
	// val_new = ft_atoi(str);

	// // 6) Teste do pdf
	// strcpy(str, " ---+--+1234ab567");
	// val = atoi(str);
	// val_new = ft_atoi(str);

	// // 5) Teste negativo
	// strcpy(str, "----7");
	// val = atoi(str);
	// val_new = ft_atoi(str);

	// // 4) Teste negativo
	// strcpy(str, "---3");
	// val = atoi(str);
	// val_new = ft_atoi(str);

	// // 3) Teste negativo
	// strcpy(str, "-5");
	// val = atoi(str);
	// val_new = ft_atoi(str);

	// // 2) Testes com espaço
	// strcpy(str, "   689");
	// val = atoi(str);
	// val_new = ft_atoi(str);

	// // 1) Primeiro Teste - Mais simples
	// strcpy(str, "959689");
	// val = atoi(str);
	// val_new = ft_atoi(str);

	printf("Origi: Str: %s Int : %d \n", str, val);
	printf("Imple: Str: %s Int : %d \n", str, val_new);

	return(0);
}
