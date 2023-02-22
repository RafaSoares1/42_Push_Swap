/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:10:35 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/16 15:50:23 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Similar to ft_strcmp the man says this function lexicographically compares the
 * NULL terminated strings s1 and s2 that are passed into the functions
 * parameters. The function returns an integer greater than, equal to, or less
 * than 0 depending on whether the string s1 is greater than, equal to, or less
 * than string s2. The comparison is again done using unsigned characters, so
 * that '\200' is greater than '\0'. The difference though, between ft_strncmp
 * and ft_strcmp is that we will only search string s1 to it's nth position. The
 * n is given in the parameters.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void) {
	char str1[] = "Rafael"; 
	str2[] = "Rafeel";
	int i = 6;
	printf("Result: %d\n", ft_strncmp(str1, str2, i));
}*/