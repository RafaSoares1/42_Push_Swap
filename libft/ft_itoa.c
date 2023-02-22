/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:57:42 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/17 11:29:21 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 SYNOPSIS: split string, with specified character as delimiter, into an array
of strings
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns an array of strings obtained by
**	splitting ’s’ using the character ’c’ as a delimiter. The array must be
**	ended by a NULL pointer.
*/
#include "libft.h"

static char	*posnum(char *str, int n, int len)
{
	long	x;

	len--;
	x = n;
	while (len >= 0)
	{
		str[len] = x % 10 + '0';
		x = x / 10;
		len--;
	}
	return (str);
}

static char	*negnum(char *str, int n, int len)
{
	long	x;

	x = n;
	str[0] = '-';
	len--;
	x = x * (-1);
	while (len > 0)
	{
		str[len] = (x % 10) + '0';
		x = x / 10;
		len--;
	}
	return (str);
}

static int	int_len(int n)
{
	int		i;
	long	x;

	x = n;
	i = 0;
	if (x <= 0)
	{
		x = x *(-1);
		i++;
	}
	while (x > 0)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = int_len(n);
	str = (char *) malloc (sizeof (char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str = negnum(str, n, len);
	}
	else if (n == 0)
		str[0] = '0';
	else
		str = posnum(str, n, len);
	return (str);
}

/*#include <stdio.h>
 int main()
{
	char *b;
	b = ft_itoa(-2147483648);
	printf("%s\n", b);
	return 0;
} */