/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:41:05 by rlins             #+#    #+#             */
/*   Updated: 2022/02/24 19:41:05 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char *str)
{
  while(*str)
  {
    write(1, str, 1);
    str++;
  }  
}

int main (char argc, char **argv)
{
  int i;

  i = argc-1;
  while(i > 1)
  {
    ft_putchar(argv[i]);
    write(1, "\n", 1);
    i--;
  }
  return (0);
}