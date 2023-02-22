/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:48:56 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/20 13:44:39 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_only_num(char **str, int index)
{
	int	i;
	int	j;

	j = 0;
	if (index == 1)
		i = 1;
	else
		i = 0;
	while (str[i])
	{
		while (str[i][j])
		{
			if (j == 0)
				if (str[i][j] == '-')
					j++;
			if ((str[i][j] < '0' || str[i][j] > '9'))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_check_doubles(t_data *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a - 1)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->stack_a[i] == stack->stack_a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_sorted(t_data *stack, char c)
{
	int	i;

	i = 0;
	if (c == 'a')
	{
		while (i < (stack->size_a - 1))
		{
			if (stack->stack_a[i] > stack->stack_a[i + 1] && c == 'a')
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		while (i < (stack->size_b - 1))
		{
			if (stack->stack_b[i] < stack->stack_b[i + 1] && c == 'b')
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
