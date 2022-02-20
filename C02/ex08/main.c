/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:42:19 by rlins             #+#    #+#             */
/*   Updated: 2022/02/13 19:42:33 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlowcase.c"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	// char	is_printable[] = "Foi Foi foi?";
	char	is_printable[] = "Foi Foi foi AAAAAAA?";
	
	str = is_printable;
	printf("%s\n", ft_strlowcase(str));
}