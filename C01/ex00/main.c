/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:27:25 by rlins             #+#    #+#             */
/*   Updated: 2022/02/10 12:55:53 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.c"
#include <stdio.h>

int	main(void)
{
	int a;
	int *ptr;

	a = 21;
	ptr = &a;
	printf("Valor anterior: %d\n", a);
	ft_ft(ptr);
	printf("Valor depois: %d\n", a);

	return (0);
}
