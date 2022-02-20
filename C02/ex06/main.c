/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:41:34 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 19:01:58 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_printable.c"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	//char	is_printable[] = "Printablea bc";
	// char	is_printable[] = "Unprintables: \t (tab)";
	//char	is_printable[] = "Unprintables: \r (Retorno de carro)";
	//char	is_printable[] = "Unprintables: \n (quebra de linha)";
	
	str = is_printable;
	printf("%d\n", ft_str_is_printable(str));
}