/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:53:19 by emsoares          #+#    #+#             */
/*   Updated: 2022/12/07 15:50:22 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_lower_hexa(unsigned int nb)
{
	char	*hexa_num;
	int		count;

	count = 0;
	hexa_num = "0123456789abcdef";
	if (nb < 16)
		count += ft_print_char(hexa_num[nb]);
	if (nb >= 16)
	{
		count += ft_print_lower_hexa(nb / 16);
		count += ft_print_lower_hexa(nb % 16);
	}
	return (count);
}
