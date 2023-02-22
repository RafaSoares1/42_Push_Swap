/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:49:32 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/20 10:41:48 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_convert(t_data *stack, int *temp)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = 0;
		while (j < stack->size_a)
		{
			if (stack->stack_a[i] == temp[j])
			{
				stack->stack_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	ft_indexing(t_data *stack)
{
	int	*temp;
	int	i;
	int	tempo;

	i = 0;
	temp = ft_calloc(stack->size_a, sizeof(int));
	if (!temp)
		return ;
	temp = ft_memcpy(temp, stack->stack_a, sizeof(int) * stack->size_a);
	while (i < (stack->size_a - 1))
	{
		if (temp[i] > temp[i + 1])
		{
			tempo = temp[i];
			temp[i] = temp [i + 1];
			temp [i + 1] = tempo;
			i = 0;
		}
		else
			i++;
	}
	ft_convert(stack, temp);
	free (temp);
}

void	ft_algorithm(int max_bits, t_data *stack, int i, int j)
{
	int	size_a;

	while (i <= max_bits && (!ft_check_sorted(stack, 'a')) && stack->size_a)
	{
		size_a = stack->size_a;
		j = 0;
		while (j < size_a && (!ft_check_sorted(stack, 'a')) && stack->size_a)
		{
			if (((stack->stack_a[0] >> i) & 1) == 0)
				ft_pb(stack);
			else
				ft_ra(stack, 1);
			j++;
		}
		ft_sort_stackb(stack, i);
		i++;
	}
}

void	ft_sort_stackb(t_data *stack, int shift)
{
	int	i;
	int	size;

	if (ft_check_sorted(stack, 'b') && (ft_check_sorted(stack, 'a')))
	{
		while (stack->size_b > 0)
			ft_pa(stack);
		return ;
	}
	size = stack->size_b;
	i = 0;
	while (i < size && stack->size_b)
	{
		if ((stack->stack_b[0] & (1 << (shift + 1))) == 0)
			ft_rb(stack, 1);
		else
			ft_pa(stack);
		i++;
	}
}
