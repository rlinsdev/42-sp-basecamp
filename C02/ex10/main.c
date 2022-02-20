/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:42:19 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 19:13:33 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlcpy.c"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	orig [50] = "C-programming-Languagea"; // 23 Char.
	char	dest [70]; // Tamanho máx.

	// Retorno do tamanho do que foi passado
	printf("Carac: %d\n", ft_strlcpy(dest, orig, 10));
	// Retorno do ponteiro que a função tratou
	printf("Desti: %s\n", dest);

	// Compilação: gcc -Wall -Werror -Wextra -lbsd main.c
}