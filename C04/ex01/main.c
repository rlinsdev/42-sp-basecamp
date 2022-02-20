/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:06:55 by rlins             #+#    #+#             */
/*   Updated: 2022/02/15 00:43:50 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.c"

int	main(void)
{
	char	str[] = "Novo teste! Same Sample!";
	char	*pointer;

	pointer = str;
	
	ft_putstr(pointer);
}
