/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:49:21 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 18:59:09 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_numeric.c"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	//char	is_numeric[] = "abc";
	// char	is_numeric[] = "2asdfasdfdasfdsf1";
	char	is_numeric[] = "9";
	//char	is_numeric[] = "6546546546456";
	
	str = is_numeric;
	printf("%d\n", ft_str_is_numeric(str));
}
