/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:19:22 by rlins             #+#    #+#             */
/*   Updated: 2022/02/21 22:19:22 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// http://linguagemc.com.br/argumentos-em-linha-de-comando/

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  int j;

  j = 0;

  if(argc > 0)
  {
    while(argv[0][j] != '\0')
    {
      //printf("Result: %s", &argv[0][j]);
      write(1, &argv[0][j], 1);
      j++;
    }
    write(1,"\n", 1);
  }
  return 0;
}

