/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:32:30 by rlins             #+#    #+#             */
/*   Updated: 2022/02/16 18:19:57 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat.c"
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[50] = "Cidade"; // Todo: Sempre deixar uma variável grande, senão gera exceção
	char	dest2[50] = "Cidade"; // Todo: Sempre deixar uma variável grande, senão gera exceção
	char	*src;

	src = " Maravilhosa";
	printf("Impl: %s \n", ft_strcat(dest, src));
	src = " Maravilhosa";
	printf("Orig: %s \n", strcat(dest2, src));
}
