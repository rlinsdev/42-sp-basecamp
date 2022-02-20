/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:56:02 by rlins             #+#    #+#             */
/*   Updated: 2022/02/10 18:32:22 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sort_int_tab.c"

void	putarra(int array[], int size)
{
	for(int i = 0; i < (size-1); i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[size-1]);
}

int	main(void)
{
	int	size = 5;
	int	matriz [5] = {9, 3, 8, 2, 1};

	printf("original: ");
	putarra(matriz, size);

	ft_sort_int_tab(matriz, size);

	printf("Alterado: ");
	putarra(matriz, size);
}
