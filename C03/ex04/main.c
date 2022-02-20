/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:45:21 by rlins             #+#    #+#             */
/*   Updated: 2022/02/16 19:21:34 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*to_find;

	// str = "PTutorialsPoint abc abc";
	str = "PTutorialsPoint abc abc";
	to_find = "Point";

	// str = "isto é um uma teste";
	// to_find = "um";
	// Achei que seria um erro, mas ambas retornaram do mesmo jeito.
	//to_find = "to";
	//to_find = "uma";


	printf("Impl: %s \n", ft_strstr(str, to_find));
	printf("Orig: %s \n", strstr(str, to_find));
}


// #include <stdio.h>
// #include <string.h>


// int main () {
//    const char haystack[50] = "PTutorialsPoint abc abc";
//    const char needle[10] = "Point";
//    char *ret;

//    ret = strstr(haystack, needle);

//    printf("The substring is: %s\n", ret);
   
//    return(0);
// }