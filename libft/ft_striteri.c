/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:38:17 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/14 13:25:42 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*s: The string on which to iterate.
f: The function to apply to each character.
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void my_func(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}

int main()
{
	char str[] = "hello.";
	ft_striteri(str, &my_func);
	printf("%s", str);
	return (0);
}*/