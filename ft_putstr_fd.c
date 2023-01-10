/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:36:58 by dramos-h          #+#    #+#             */
/*   Updated: 2022/12/21 11:37:02 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s && fd)
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
}

/* int	main(void)
{
	char s[] = "holaa";

	ft_putstr_fd(s, 1);
} */
