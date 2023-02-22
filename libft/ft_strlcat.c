/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:34:49 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/16 13:32:26 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcat() function returns the total length of the string that would have
been created if there was unlimited space. This might or might not be equal
to the length of the string actually created, 
depending on whether there was enough space.
copies the source src to end of the destination dst char array. 
strlcat means string with length concatenation. The last length size
parameter makes sure C doesn’t write past the size of the array.*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst == NULL && size == 0)
		return (0);
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*#include <stdio.h>
int main (void)
{
char src[] = "Vieira";
char dest [] = "Rafael";
printf("%d \n", ft_strlcat(dest, src, 12)); nr de caracteres total 
											ao juntar src +dest
se quiser ver a string completa na totalidade nao esquecer o '\0' ou seja
total + 1
printf("%s \n", dest); string junta
return 0;
} */