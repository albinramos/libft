/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:53:03 by dramos-h          #+#    #+#             */
/*   Updated: 2022/11/29 13:53:05 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*MEMMOVE: función que copia len bytes de la cadena 
src a la cadena dst. Devuelve el valor original
 de dst. Función no destructiva.*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src < dst)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len -1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	if (src > dst)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*int main ()
{
    char dst[20] = "oldstring";
    char src[20] = "new";

    printf("Before memmove dest = %s, src = %s\n", dst, src);
    ft_memmove(dst, src, 3);
    printf("After memmove dest = %s", dst);

   return(0);
}*/