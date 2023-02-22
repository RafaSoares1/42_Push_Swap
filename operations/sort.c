/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:30:34 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/22 10:40:48 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_2(t_data *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		ft_sa(stack, 1);
}

void	ft_sort_3(t_data *stack)
{
	int	*s;

	s = stack->stack_a;
	if (s[0] > s[1] && s[1] < s[2] && s[2] > s[0])
		ft_sa(stack, 1);
	else if (s[0] > s[1] && s[1] > s[2] && s[2] < s[0])
	{
		ft_sa(stack, 1);
		ft_rra(stack, 1);
	}
	else if (s[0] > s[1] && s[1] < s[2] && s[2] < s[0])
		ft_ra(stack, 1);
	else if (s[0] < s[1] && s[1] > s[2] && s[2] > s[0])
	{
		ft_sa(stack, 1);
		ft_ra(stack, 1);
	}
	else if (s[0] < s[1] && s[1] > s[2] && s[2] < s[0])
		ft_rra(stack, 1);
	else
		return ;
}

void	ft_sort_5(t_data *stack)
{
	int	*s;

	s = stack->stack_a;
	if (ft_check_sorted(stack, 'a'))
	{
		free(stack);
		exit(0);
	}
	ft_get_min_max(stack);
	ft_get_3num_sort5(stack);
	ft_sort_3(stack);
	if (stack->stack_b[0] > stack->stack_b[1])
	{
		ft_pa(stack);
		ft_ra(stack, 1);
		ft_pa(stack);
	}
	else
	{
		ft_pa(stack);
		ft_pa(stack);
		ft_ra(stack, 1);
	}
}

void	ft_sort_others(t_data *stack)
{
	int	max_bits;
	int	i;
	int	j;

	i = 0;
	j = 0;
	max_bits = 0;
	ft_indexing(stack);
	ft_get_min_max(stack);
	while ((stack->max >> max_bits) != 0)
		max_bits++;
	ft_algorithm(max_bits, stack, i, j);
}
