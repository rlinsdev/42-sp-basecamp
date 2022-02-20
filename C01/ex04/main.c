/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:16:32 by rlins             #+#    #+#             */
/*   Updated: 2022/02/10 14:01:58 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int	main(void)
{
	int	vlr1 = 150;
	int	vlr2 = 2;
	int	*a = &vlr1;
	int	*b = &vlr2;
	
	ft_ultimate_div_mod(a, b);

	printf("Divisão: %d\n", *a);
	printf("Resto: %d\n", *b);
}
