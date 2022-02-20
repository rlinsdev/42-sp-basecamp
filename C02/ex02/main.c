/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:06:06 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 18:57:29 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_alpha.c"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	//char	alphabet[] = "abc";
	char	alphabet[] = "AmericanStandardCodeforInformationInterchange";
	//char	alphabet[] = "(";
	
	//char	alphabet[] = "";
	str = alphabet;
	printf("%d\n", ft_str_is_alpha(str));
}
