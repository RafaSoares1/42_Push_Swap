/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:07:15 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/06 14:02:15 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
       The memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap.  
       The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int main (void) 
{
  char src[] = "HELLO";
   ft_memcpy(src+1, src, 2);
  printf("After memcpy dest = %s\n", src);
   
  return(0);
}*/