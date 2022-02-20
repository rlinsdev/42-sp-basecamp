/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:40:04 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 18:54:48 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncpy.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// char	orig[20] = "Menor que 20.";
	// char	dest[20];

	// puts(orig);
	// ft_strncpy(dest, orig, 20);
	// puts("Resultado: ");
	// puts(dest);

	char orig[70] = "ABC abc, toda criança, tem que ler e ";
	char dest[100];
	char dest2[100];

	printf("Impl: %s \n", ft_strncpy(dest, orig, 10));
	printf("Orig: %s \n", strncpy(dest2, orig, 10));
	// puts("Resultado - (truncate em 20): ");
	// puts(dest);
}
