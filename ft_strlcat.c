/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:59:01 by dramos-h          #+#    #+#             */
/*   Updated: 2022/11/30 10:59:04 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i - j != dstsize)
		dst[i] = '\0';
	return (i - j + ft_strlen(src));
}

/* int  main(void)
{
   char        dst[] = "hola";
   const char  src[]= "comida";
 
   printf("%zu\n", ft_strlcat(dst, src, 7));
   //printf("%zu\n", strlcat(dst1, src1, 7));
   printf("%s\n", dst);
   return (0);
} */


/* strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string). */