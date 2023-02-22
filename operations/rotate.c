/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:45:53 by rafael            #+#    #+#             */
/*   Updated: 2023/02/10 11:04:35 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_data *array, int flag)
{
	int	i;
	int	temp;

	i = 0;
	temp = array->stack_a[0];
	while (i < array->size_a - 1)
	{
		array->stack_a[i] = array->stack_a[i + 1];
		i++;
	}
	array->stack_a[array->size_a - 1] = temp;
	if (flag == 1)
		ft_printf("ra\n");
}

void	ft_rb(t_data *array, int flag)
{
	int	i;
	int	temp;

	i = 0;
	temp = array->stack_b[0];
	while (i < array->size_b - 1)
	{
		array->stack_b[i] = array->stack_b[i + 1];
		i++;
	}
	array->stack_b[array->size_b - 1] = temp;
	if (flag == 1)
		ft_printf("rb\n");
}

void	ft_rr(t_data *array)
{
	ft_ra(array, 0);
	ft_rb(array, 0);
	ft_printf("rr\n");
}
