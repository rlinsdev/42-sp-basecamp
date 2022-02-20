/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:40:06 by rlins             #+#    #+#             */
/*   Updated: 2022/02/10 13:12:30 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int a = 145;
	int b = 10;
	// int b = 0;
	int	*div = &a;
	int	*mod = &b;
	
	ft_div_mod(a, b, div, mod);

	printf("Divisão: %u\n", *div);
	printf("Resto: %u\n", *mod);
}
