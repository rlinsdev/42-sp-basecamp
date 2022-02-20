/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:15:04 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 19:15:04 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_power.c"

int main(void)
{
  int nb;
  int power;

  nb = 2;
  power = 3;

  printf("Resp: %d \n", ft_recursive_power(nb, power));
  
  return (0);
}