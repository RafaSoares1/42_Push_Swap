/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:30:58 by emsoares          #+#    #+#             */
/*   Updated: 2022/12/09 12:42:35 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned_int(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb < 10)
		i += ft_print_char (nb + 48);
	else
	{
		i += ft_print_num (nb / 10);
		i += ft_print_num (nb % 10);
	}
	return (i);
}
