/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:47:44 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/08 13:13:43 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memset() function fills the first n bytes of the memory area
       pointed to by s with the constant byte c.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}

/*int main () {
   char str[] = "This is string.h library function";

   ft_memset(str,'$',7);

   printf("%s\n", str);
   return(0);
}*/