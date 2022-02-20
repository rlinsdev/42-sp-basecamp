/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:33:04 by rlins             #+#    #+#             */
/*   Updated: 2022/02/13 16:40:43 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strupcase.c"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	//char	is_printable[] = "tudo minúsculo";
	char	is_printable[] = "Foi Foi foi?";
	
	str = is_printable;
	printf("%s\n", ft_strupcase(str));
}