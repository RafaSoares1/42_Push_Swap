/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:21:31 by rafael            #+#    #+#             */
/*   Updated: 2023/02/10 11:04:00 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_data *array, int flag)
{
	int	len;
	int	temp;

	len = array->size_a - 1;
	temp = array->stack_a[len];
	while (len > 0)
	{
		array->stack_a [len] = array->stack_a[len - 1];
		len--;
	}
	array->stack_a[0] = temp;
	if (flag == 1)
		ft_printf("rra\n");
}

void	ft_rrb(t_data *array, int flag)
{
	int	len;
	int	temp;

	len = array->size_b - 1;
	temp = array->stack_b[len];
	while (len > 0)
	{
		array->stack_b [len] = array->stack_b[len - 1];
		len--;
	}
	array->stack_b[0] = temp;
	if (flag == 1)
		ft_printf("rrb\n");
}

void	ft_rrr(t_data *array)
{
	ft_rra(array, 0);
	ft_rrb(array, 0);
	ft_printf("rrr\n");
}
