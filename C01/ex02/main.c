/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:44:58 by rlins             #+#    #+#             */
/*   Updated: 2022/02/10 12:59:15 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.c"
#include <stdio.h>

int	main(void)
{
	int n1  = 7;
	int n2  = 3;
	int *a = &n1;
	int *b = &n2;

	ft_swap(a, b);
	printf("Era 7 agora é: %u\n", *a);
	printf("Era 3 agora é: %u\n", *b);
}
