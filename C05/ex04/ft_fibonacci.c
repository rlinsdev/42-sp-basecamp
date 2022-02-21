/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:15:03 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 20:15:03 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
  if(index < 0)
    return (-1);
  else if (index == 0)
    return (0);
  else if (index == 1)
    return (1);

  int vlr1;
  int vlr2;
  int vlr3;

  vlr1 = 0;
  vlr2 = 0;
  vlr3 = 0;
  
  // Fn = Fn - 1 + Fn - 2
  vlr1 = ft_fibonacci(index - 1);
  vlr2 = ft_fibonacci(index - 2);
  vlr3 = vlr1 + vlr2;

  return vlr3;
}