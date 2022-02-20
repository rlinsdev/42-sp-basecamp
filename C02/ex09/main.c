/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:42:19 by rlins             #+#    #+#             */
/*   Updated: 2022/02/13 21:24:20 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcapitalize.c"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	
	char	is_printable[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	str = is_printable;
	printf("%s\n", ft_strcapitalize(str));
}