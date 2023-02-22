/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:13:54 by emsoares          #+#    #+#             */
/*   Updated: 2023/02/22 10:26:22 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	word_count(char *s, char c)
{
	int	word;
	int	count;

	count = 0;
	word = 0;
	while (*s != '\0')
	{
		if (*s != c && count == 0)
		{
			word++;
			count = 1;
		}
		else if (*s == c)
		{
			count = 0;
		}
		s++;
	}
	return (word);
}

void	init_stack(t_data *stack, int len)
{
	stack->stack_a = ft_calloc(len, sizeof(int));
	stack->stack_b = ft_calloc(len, sizeof(int));
	stack->size_a = 0;
	stack->size_b = 0;
	stack->max = 0;
	stack->min = 0;
	stack->med = 0;
}

long	ft_atol(const char *str)
{
	int				i;
	long			sign;
	long			result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

int	ft_abs(int n)
{
	if(n<0)
		return (-n);
	return (n);
}
