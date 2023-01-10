/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:49:45 by dramos-h          #+#    #+#             */
/*   Updated: 2022/11/29 11:49:48 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* set onebyte 
value to a memory block byte by
 byte. Useful for initialization 
 of a memory block byte by byte by a particular value.
arguments:
str: pointer of the mmeory location 
where the memory wil be set. is a void pointer so we can set any type of emmory block
ch: value that is copied to the memory block. 
is an in value but converted to unsigned char before copied
n: number of bytes in the memory blockwhich is set */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* int main()  
{  
    char b[] = "Memset example";  
	int i = 'b';
	size_t len = 2;
	printf("%s\n", ft_memset(b,i,len));
} */
