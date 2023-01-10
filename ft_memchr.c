/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:25:15 by dramos-h          #+#    #+#             */
/*   Updated: 2022/11/30 13:25:18 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}

/*  int main ()
{
    char s[] = "Hola Urduliz";
	int c = 97;
    size_t n = 9;
	printf("%s\n", ft_memchr(s, c, n));
	
}  */