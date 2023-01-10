/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:44:47 by dramos-h          #+#    #+#             */
/*   Updated: 2022/11/30 09:44:50 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (src[n])
		n++;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (n);
}

int main ()
{
    char dst[] = "stuff";
    char src[] = "party";

    ft_strlcpy(dst, src, sizeof(src));
    printf("hello %s", dst);
}
 