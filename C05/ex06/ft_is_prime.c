/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:09:39 by rlins             #+#    #+#             */
/*   Updated: 2022/02/21 21:09:39 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
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
    return 1;
  else
    return 0;
}