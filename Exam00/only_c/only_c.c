/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:37:05 by rlins             #+#    #+#             */
/*   Updated: 2022/02/20 09:37:05 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void only_c (void)
{
  write(1, "c", 1);
}