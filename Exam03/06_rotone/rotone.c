/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:18:13 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 13:18:13 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(*c)
{
  write(1, &c, 1);
}

int rotone_main(int argc, char **argv)
{
  if(argc != 1)
  {
    ft_putchar('\n');
    return (0);
  }
  
  int i;
  i = 0;
  while (*argv[0] != '\0')
  {
    // Orig: AkjhZ zLKIJz , 23y 
    // Espe: BlkiA aMLJKa , 23z $
    // Meu:  BlkiA aMLJKa , 23z

    
    if((*argv[0]>='a' && *argv[0] <='z') 
         || (*argv[0]>='A' && *argv[0]<='Z'))
    {
      if(*argv[0] == 'z')
        ft_putchar('a'); // abc
      else if(*argv[0]== 'Z')
        ft_putchar('A'); // ABC
      else
      {
          ft_putchar(*argv[0] + 1); // abc
      }
    }
    else
    {
      ft_putchar(*argv[0]);
    }
    
   
    argv[0]++;
  }
  
  ft_putchar('\n'); // querbra
  return (0);
}