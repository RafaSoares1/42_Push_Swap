/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:38:50 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/16 15:50:17 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function returns a pointer to the FIRST occurrence
       of the character c in the string s.
  The strchr() and strrchr() functions return a pointer to the
       matched character or NULL if the character is not found.  The
       terminating null byte is considered part of the string, so that
       if c is specified as '\0', these functions return a pointer to
       the terminator.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)s + i);
}

/*int	main()
{
	char *str = "ahsfvasvfasebhsba";
	char c = 'e';
	char *a = ft_strchr(str, c);
	printf("%c\n", *a);
	return 0;
}*/