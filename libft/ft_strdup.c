/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:01:40 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/08 13:04:12 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strdup() function returns a pointer to a new string which is
       a duplicate of the string s.  Memory for the new string is
       obtained with malloc(3).*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	s1_copy = malloc((len + 1) * sizeof(char));
	i = 0;
	if (s1_copy == 0)
		return (0);
	while (i < len)
	{
		s1_copy[i] = s1[i];
		i++;
	}
	s1_copy[i] = '\0';
	return (s1_copy);
}
