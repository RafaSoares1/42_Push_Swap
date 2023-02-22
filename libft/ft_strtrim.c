/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:57:21 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/16 17:42:23 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string 
strtrim removes all whitespace characters from the 
beginning and the end of a string. In other words,
 it will remove all the unnecessary white
 that you might have in a string*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
	s1++;
	i = ft_strlen(s1) - 1;
	while (i && ft_strchr(set, s1[i]))
		i--;
	result = ft_substr(s1, 0, i + 1);
	return (result);
}

/*#include <stdio.h>

int main()
{
    char a[] = "  aabcdefgg  ";
    char s[] = "ag ";
    char *str;
    str = ft_strtrim(a, s);
    printf("|%s|\n", str);
    return 0;
}*/