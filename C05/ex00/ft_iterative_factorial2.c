/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:21:39 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 16:21:39 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_multiply(int n)
{
  if(n >= 1)
    return n * ft_multiply(n - 1);
  else
    return 1;
}

int ft_iterative_factorial2(int nb)
{
  if (nb < 0)
    return (0);
  else if(nb == 0)
    return (1);

  int i;
  int vlr;

  return ft_multiply(nb);
}