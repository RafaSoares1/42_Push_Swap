/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:01:33 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/15 16:14:29 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list
Iterates the list ’lst’ and applies the function
’f’ on the content of each node*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
