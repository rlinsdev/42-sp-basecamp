/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:15:07 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 19:15:07 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
  if(power < 0)
    return(0);
  else if (nb == 0 && power == 0)
    return (1);
  else if (power > 1)
    return (nb * ft_recursive_power(nb, --power));
  return nb;
}