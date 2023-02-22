/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upper_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:23:21 by emsoares          #+#    #+#             */
/*   Updated: 2022/12/07 12:53:18 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_upper_hexa(unsigned int nb)
{
	char	*hexa_num;
	int		count;

	count = 0;
	hexa_num = "0123456789ABCDEF";
	if (nb < 16)
		count += ft_print_char(hexa_num[nb]);
	if (nb >= 16)
	{
		count += ft_print_upper_hexa(nb / 16);
		count += ft_print_upper_hexa(nb % 16);
	}
	return (count);
}
