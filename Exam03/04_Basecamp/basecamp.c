/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basecamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:38:54 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 10:38:54 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void ft_print_nmbr(char *c)
{
  write(1, &c, 1);
}
// Deve existir um jeito mais fácil de fazer isto...
void ft_print_nmbr_comp(int *nbr)
{
  char c[3];
  int i;
  i = 0;
  
  while(nbr > 0)
  {
    c[i] = (nbr % 10) + 48;
    nbr = nbr / 10;
    i++;
  }
  i = i - 1; // Decrementa. Array começa do zero
  while (i >= 0)
  {
    ft_print_nmbr(c[i]);
    i--;
  }
}

void basecamp()
{
  int i;
  i = 1;
  while(i <= 100)
  {
    if((i % 3) == 0 && (i % 5) == 0)
      write(1, "basecamp", 8);
    else if((i % 3) == 0)
       write(1, "base", 4);
    else if((i % 5) == 0)
       write(1, "camp", 4);
    else
    {
      if(i < 10)
        ft_print_nmbr(i + 48);
      else
        ft_print_nmbr_comp(i);
    }      
    write(1, "\n", 1);
    i++;
  }
}