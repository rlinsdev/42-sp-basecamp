/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:05:25 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 19:00:05 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_lowercase.c"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	char	is_lower[] = "abc";
	//char	is_lower[] = "ASDFASDFa";
	//char	is_lower[] = "&";
	//char	is_lower[] = "ABCABCABC";
	
	str = is_lower;
	printf("%d\n", ft_str_is_lowercase(str));
}
