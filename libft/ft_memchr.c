/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:56:56 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/16 16:12:50 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function searches for the first occurrence of a 
character ch in the n bytes
of characters in the block of memory pointed by str.
It returns a pointer to the matching byte if the searched byte was 
found, otherwise, a NULL pointer is returned.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}

/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *res;

   res = ft_memchr(str, ch, 25);

   printf("String after |%c| is - %s\n", ch, res);

   return(0);
}*/