/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:20:05 by rlins             #+#    #+#             */
/*   Updated: 2022/02/21 08:20:05 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
  int i;
  i = nb;

  while (i > 1)
  {
    i--;
    if(nb % i == 0)
    {
      if(i * i == nb)
        return i;
    }
  }

  return 0;
}