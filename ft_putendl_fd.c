/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:23:01 by dramos-h          #+#    #+#             */
/*   Updated: 2022/12/21 12:23:05 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s && fd)
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	write (fd, "\n", 1);
}

/* int	main(void)
{
	char s[] = "holaa";

	ft_putendl_fd(s, 1);
    return(0);
} */