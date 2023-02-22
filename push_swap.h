/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:03:16 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/22 10:42:34 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
	int	min;
	int	max;
	int	med;
}	t_data;

//operations
void	ft_sa(t_data *array, int flag);
void	ft_sb(t_data *array, int flag);
void	ft_ss(t_data *array);
void	ft_ra(t_data *array, int flag);
void	ft_rb(t_data *array, int flag);
void	ft_rr(t_data *array);
void	ft_rra(t_data *array, int flag);
void	ft_rrb(t_data *array, int flag);
void	ft_rrr(t_data *array);
void	ft_pa(t_data *array);
void	ft_pb(t_data *array);

//get
void	ft_get_num(char *str, t_data *array);
void	ft_get_stack(t_data *stack, char **argv, int argc);
void	ft_get_min_max(t_data *stack);
void	ft_get_3num_sort5(t_data *stack);

//check
int		ft_check_only_num(char **str, int index);
int		ft_check_doubles(t_data *stack);
int		ft_check_sorted(t_data *stack, char c);

//sort
void	ft_sort_2(t_data *stack);
void	ft_sort_3(t_data *stack);
void	ft_sort_5(t_data *stack);
void	ft_sort_others(t_data *stack);

//free
void	ft_free_str(char **str);
void	ft_free_av2(t_data *array, char **s);
void	ft_free1(t_data *array, char **s);
void	ft_free2(t_data *stack);

//utils
void	ft_swap(int *a, int *b);
int		word_count(char *s, char c);
void	init_stack(t_data *stack, int len);
long	ft_atol(const char *str);

//algorithm
void	ft_convert(t_data *stack, int *temp);
void	ft_indexing(t_data *stack);
void	ft_algorithm(int max_bits, t_data *stack, int i, int j);
void	ft_sort_stackb(t_data *stack, int shift);
#endif
