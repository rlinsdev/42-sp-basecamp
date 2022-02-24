/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:34:36 by rlins             #+#    #+#             */
/*   Updated: 2022/02/22 18:34:36 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char *str)
{
  while (*str)
  {
    write(1, str, 1);
    str++;
  }
}

int main (int argc, char **argv)
{
  int i;

  i = 1;
  while(argc > i)
  {
    ft_putchar(argv[i]);
    write(1, "\n", 1);
    i++;
  }
  return (0);
}
