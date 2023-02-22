/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:15:45 by emsoares          #+#    #+#             */
/*   Updated: 2022/12/06 16:34:31 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_num(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i += ft_print_char ('-');
	}
	if (nb < 10)
		i += ft_print_char (nb + 48);
	else
	{
		i += ft_print_num (nb / 10);
		i += ft_print_num (nb % 10);
	}
	return (i);
}
