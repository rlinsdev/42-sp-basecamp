/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:00:45 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 17:00:45 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_iterative_power.c"

int main (void)
{
  int nb;
  int power;

  // // Teste 1
  // nb = 0;
  // power = 0;

  // // Teste 2
  // nb = 0;
  // power = -1;

  // teste 3 (resultado = 8)
  nb = 3;
  power = 3;

  printf("Result: %d \n", ft_iterative_power(nb, power));
  return (0);
}