/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:22:03 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 12:22:03 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aff_last_param.c"

int main(void)
{
  //printf("teste");
  //char *arg0[] = {"zaz", "come", "gatos"};
  //aff_last_param_main(3, arg0);
  //char *arg1[] = {"eu amo sabão"};
  //aff_last_param_main(1, arg1);
  char **arg2;
  aff_last_param_main(0, arg2);
  return (0);
}