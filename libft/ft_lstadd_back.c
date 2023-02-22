/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:28:35 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/15 12:36:27 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Adds the node ’new’ at the end of the list*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (new == NULL)
		return ;
	ft_lstlast (*lst)-> next = new;
}
