/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:38:03 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 18:51:26 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	orig [20] = "C programming";
	char	dest [20];
	char	dest2 [20];

	printf("Orig: %s \n", strcpy(dest, orig));
	printf("Impl: %s \n", ft_strcpy(dest2, orig));
}
