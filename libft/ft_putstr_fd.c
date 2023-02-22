/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:45:25 by emsoares          #+#    #+#             */
/*   Updated: 2022/11/17 12:36:38 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* s: The string to output.
fd: The file descriptor on which to write.
Outputs the string ’s’ to the given file
descriptor. */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}

/*int	main()
{
	char c[] = "rafael";
	char *p;
	p=c;
	int fd = 1;
	
	ft_putstr_fd(p, fd);
}*/