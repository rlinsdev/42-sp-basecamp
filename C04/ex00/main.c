/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:52:06 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 12:15:12 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	str = "testando caracteres"; //19
	printf("%d", ft_strlen(str));
}
