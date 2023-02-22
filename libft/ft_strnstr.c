/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:50:52 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/16 17:01:39 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the	first occurrence of the	null-termi-
     nated string little in the	string big, where not more than	len characters
     are searched.  Characters that appear after a `\0'	character are not
     searched.	Since the strnstr() function is	a FreeBSD specific API,	it
     should only be used when portability is not a concern.
     
    If	little is an empty string, big is returned; if little occurs nowhere
     in	big, NULL is returned; otherwise a pointer to the first	character of
     the first occurrence of little is returned.
     */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little [0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*int main () 
{
 const char haystack[20] = "TutorialsPoint";
 const char needle[10] = "to";
 char *result;

 result = ft_strnstr(haystack, needle, 2);
 printf("The substring is: %s\n", result);
 return(0);
}*/