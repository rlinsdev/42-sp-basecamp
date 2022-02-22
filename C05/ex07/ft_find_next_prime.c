/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:04:14 by rlins             #+#    #+#             */
/*   Updated: 2022/02/21 22:04:14 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
  int count;
  int i;

  i = 1;
  count = 0;

  while(i <= nb)
  {
    if(nb % i == 0)
      count++;
    i++;
  }
  if(count ==2)
    return nb;
  else
    ft_find_next_prime(nb + 1);
}