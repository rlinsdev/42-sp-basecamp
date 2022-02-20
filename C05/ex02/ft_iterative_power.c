/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:00:48 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 17:00:48 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
  if(power < 0)
    return(0);
  else if (nb == 0 && power == 0)
    return (1);
  
  int i;
  long total;

  total = 1;
  i = 1;
  while (i <= power)
  {
    total = total * nb;
    i++;
  }
  return total;
}