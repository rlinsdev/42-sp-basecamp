/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:07:18 by rlins             #+#    #+#             */
/*   Updated: 2022/02/11 14:25:38 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rev_int_tab.c"
#include <stdio.h>

void putarr(int arr[], int size)
{
	for (int i = 0; i < (size -1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main (void)
{
	int	size = 6;
	int matriz[6] = {1, 2, 3, 4, 5, 6};
	// int	size = 4;
	// int matriz[4] = {1, 2, 3, 4};

	//int	size = 11;
	//int matriz[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	

	printf("Original: ");
	putarr(matriz, size);

	ft_rev_int_tab(matriz, size);

	printf("Alterada: ");
	putarr(matriz, size);
}
