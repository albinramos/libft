/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:17:50 by dramos-h          #+#    #+#             */
/*   Updated: 2022/11/29 13:17:52 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// pasar unas cadenas a otras

#include "libft.h"
 
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (src == NULL && dst == NULL)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* int main(void)
{
    char src[] = "abdef";
    char dst[] = "xxxxxxxxxxxxxxxx";
	
    printf("%s\n", ft_memcpy(dst, src, 5));
    return(0);
} */