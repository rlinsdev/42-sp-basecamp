/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:34:39 by rlins             #+#    #+#             */
/*   Updated: 2022/02/10 15:40:26 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.c"

int	main(void)
{
	char	str[] = "Testando 123...";
	char	*pntr;

	pntr = str;
	
	ft_putstr(pntr);

	
}
