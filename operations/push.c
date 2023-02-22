/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:21:16 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/10 11:03:17 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_data *array)
{
	int	i;

	if (array->size_b <= 0)
		return ;
	i = array->size_a;
	while (i >= 1)
	{
		ft_swap(&array->stack_a[i], &array->stack_a[i - 1]);
		i--;
	}
	array->stack_a[0] = array->stack_b[0];
	i = 0;
	while (i + 1 < array->size_b)
	{
		ft_swap(&array->stack_b[i], &array->stack_b[i + 1]);
		i++;
	}
	array->size_a++;
	array->size_b--;
	ft_printf("pa\n");
}

void	ft_pb(t_data *array)
{
	int	i;

	if (array->size_a <= 0)
		return ;
	i = array->size_b;
	while (i >= 1)
	{
		ft_swap(&array->stack_b[i], &array->stack_b[i - 1]);
		i--;
	}
	array->stack_b[0] = array->stack_a[0];
	i = 0;
	while (i + 1 < array->size_a)
	{
		ft_swap(&array->stack_a[i], &array->stack_a[i + 1]);
		i++;
	}
	array->size_a--;
	array->size_b++;
	ft_printf("pb\n");
}
