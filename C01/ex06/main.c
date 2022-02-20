/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:27:02 by rlins             #+#    #+#             */
/*   Updated: 2022/02/10 16:02:12 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include <stdio.h>

int	main(void)
{
	char	str[] = "ABCABC";
	int	count = ft_strlen(str);
	printf("Numero de caracteres: %d\n", count);
}
