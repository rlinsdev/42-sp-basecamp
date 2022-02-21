/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:15:00 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 20:15:00 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.hipercultura.com/sequencia-fibonacci/
// Fórmula:  Fn = Fn - 1 + Fn - 2

#include <stdio.h>
#include "ft_fibonacci.c"

int main(void)
{
  printf("fibonacci: %d ", ft_fibonacci(8)); 
}