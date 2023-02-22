/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:42:45 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/16 17:20:03 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_get_num(char *str, t_data *array)
{
	int		temp;
	char	**splitado;
	int		i;

	temp = word_count(str, ' ');
	i = 0;
	splitado = ft_split(str, ' ');
	if (ft_check_only_num(splitado, 0) == 0)
		ft_free1(array, splitado);
	init_stack(array, temp);
	array->size_a = temp;
	while (i < array->size_a)
	{
		if (ft_atol(splitado[i]) > INT_MAX || ft_atol(splitado[i]) < INT_MIN)
			ft_free_av2(array, splitado);
		else
			array->stack_a[i] = ft_atoi(splitado[i]);
		i++;
	}
	if (ft_check_doubles(array) == 0)
		ft_free_av2(array, splitado);
	else
		ft_free_str(splitado);
}

void	ft_get_stack(t_data *stack, char **argv, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ft_check_only_num(argv, 1) == 0)
		ft_free2(stack);
	while (j < argc)
	{
		if (ft_atol(argv[j]) > INT_MAX || ft_atol(argv[j]) < INT_MIN)
			ft_free2(stack);
		else
		{
			stack->stack_a[i] = ft_atoi(argv[j]);
			stack->size_a += 1;
			i++;
		}
		j++;
	}
	if (ft_check_doubles(stack) == 0)
		ft_free2(stack);
}

void	ft_get_min_max(t_data *stack)
{
	int	i;

	i = 0;
	stack->min = stack->stack_a[0];
	while (i < stack->size_a)
	{
		if (stack->min > stack->stack_a[i])
			stack->min = stack->stack_a[i];
		i++;
	}
	i = 0;
	stack->max = stack->stack_a[0];
	while (i < stack->size_a)
	{
		if (stack->max < stack->stack_a[i])
			stack->max = stack->stack_a[i];
		i++;
	}
}

void	ft_get_3num_sort5(t_data *stack)
{
	int	*s;
	int	max;
	int	min;

	max = stack->max;
	min = stack->min;
	s = stack->stack_a;
	while (stack->size_a != 3)
	{
		if (s[0] == max || s[0] == min)
			ft_pb(stack);
		else
		{
			if ((s[1] == max || s[1] == min) || (s[2] == max || s[2] == min))
				ft_ra(stack, 1);
			else
				ft_rra(stack, 1);
		}
	}
}
