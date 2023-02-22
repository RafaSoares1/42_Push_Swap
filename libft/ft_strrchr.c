/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:48:21 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/16 15:50:20 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strrchr() function returns a pointer 
to the L A S T occurrence of the character c in the string s. 
  The strchr() and strrchr() functions return a pointer to the
       matched character or NULL if the character is not found.  The
       terminating null byte is considered part of the string, so that
       if c is specified as '\0', these functions return a pointer to
       the terminator.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main()
{
	char *str = "aacaaacaaaaaaaa";
	char c = 'c';
	char *a = ft_strrchr(str, c);
	printf("Conteúdo da memória: %c\n", *a);
	return 0;
}*/