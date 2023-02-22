/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:04:12 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/13 16:31:39 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	ft_free_av2(t_data *array, char **s)
{
	free(array->stack_a);
	free(array->stack_b);
	ft_free_str(s);
	free(array);
	write(2, "Error\n", 6);
	exit(0);
}

void	ft_free1(t_data *array, char **s)
{
	ft_free_str(s);
	free(array);
	write(2, "Error\n", 6);
	exit(0);
}

void	ft_free2(t_data *stack)
{
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);
	write(2, "Error\n", 6);
	exit(0);
}
