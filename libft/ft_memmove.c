/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:58:07 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/16 12:12:10 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    The memmove() function copies n bytes from memory area src to
       memory area dest.  
    The memory areas may overlap: copying takes
       place as though the bytes in src are first copied into a
       temporary array that does not overlap src or dest, and the bytes
       are then copied from the temporary array to dest.
    The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_src;
	unsigned char	*p_dest;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (dest > src && dest - src < (int)n)
	{
		while (n != 0)
		{
			n--;
			p_dest[n] = p_src[n];
		}
		return (dest);
	}
	ft_memcpy (dest, src, n);
	return (dest);
}

/*#include <stdio.h>
int main () {
    
    char src[]  = "RafaelVieira";
	char dest[] = "hello";
    ft_memmove(dest, src, 2);
    printf("After ft_memmove dest = %s, src = %s\n", dest, src);
    return(0);
}*/