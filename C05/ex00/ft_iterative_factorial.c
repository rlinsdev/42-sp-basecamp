/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:51:45 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 15:51:45 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
  if (nb < 0)
    return (0);
  else if(nb == 0)
    return (1);

  int i;
  int vlr;
  
  vlr = 1;
  i = 0;

  while(i < nb)
  {
    vlr = vlr * (i + 1);
    i++;
  }
  return vlr;
}