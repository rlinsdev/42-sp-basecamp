/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:25:53 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 10:25:53 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "strlen.c"

int main (void)
{
  printf("Teste");
  char str[] = "abc abc, toda criança"; //21
  printf("Result: %d \n", ft_strlen(str));
  return (0);
}