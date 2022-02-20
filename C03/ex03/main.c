/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:26:46 by rlins             #+#    #+#             */
/*   Updated: 2022/02/16 18:18:50 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncat.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	qtd = 8;
	char			dest[50] = "Cidade"; // Atentar-se para o tamanho do array. Se muito pequeno, pode dar problema na concatenação
	char			dest2[50] = "Cidade"; // Atentar-se para o tamanho do array. Se muito pequeno, pode dar problema na concatenação
	char			*src;

	src = " Maravilhosa";
	printf("Impl: %s \n", ft_strncat(dest, src, qtd));
	src = " Maravilhosa";
	//printf("%s",dest);
	printf("Orig: %s \n", strncat(dest2, src, qtd));
}