/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:12:46 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/10 11:06:08 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_data *array, int flag)
{
	if (array->size_a < 2)
		return ;
	ft_swap(&array->stack_a[0], &array->stack_a[1]);
	if (flag == 1)
		ft_printf("sa\n");
}

void	ft_sb(t_data *array, int flag)
{
	if (array->size_b < 2)
		return ;
	ft_swap(&array->stack_b[0], &array->stack_b[1]);
	if (flag == 1)
		ft_printf("sb\n");
}

void	ft_ss(t_data *array)
{
	ft_sa(array, 0);
	ft_sb(array, 0);
	ft_printf("ss\n");
}
