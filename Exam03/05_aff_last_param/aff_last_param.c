/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:22:06 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 12:22:06 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char *c)
{
  write(1, &c, 1);
}

int aff_last_param_main(int argc, char **argv)
{
  if(argc < 1)
  {
    write(1, "\n", 1);
    return (0);
  }

  int qtd_param;
  qtd_param = argc - 1;

  while(*argv[qtd_param])
  {
    write(1, argv[qtd_param], 1);
    argv[qtd_param]++;
  }
  write(1, "\n", 1);
  return (0);
}