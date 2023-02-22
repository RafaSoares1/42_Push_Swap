/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:00:32 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/22 10:23:02 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*stack;

	if (argc == 1)
		return (0);
	stack = malloc(sizeof(t_data));
	if (argc == 2)
		ft_get_num(argv[1], stack);
	else
	{
		init_stack(stack, argc - 1);
		ft_get_stack(stack, argv, argc);
	}
	if (stack->size_a == 2)
		ft_sort_2(stack);
	if (stack->size_a == 3)
		ft_sort_3(stack);
	if (stack->size_a == 5)
		ft_sort_5(stack);
	else
		ft_sort_others(stack);
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);
	return (0);
}
