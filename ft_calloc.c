/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:17:36 by dramos-h          #+#    #+#             */
/*   Updated: 2022/12/02 09:17:39 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    size_t  i;

    i = 0;
    ptr = malloc (count * size);
    if (ptr == NULL)
        return (NULL);
    while(i < (count * size))
    {
        ((char *)ptr)[i] = '\0';
        i++;
    }
    return (ptr);
} */

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*aux;

i = 0;
aux = malloc(count * size);
	if (aux == NULL)
		return (NULL);
	while (((char *)aux)[i])
	{
		((char *)aux)[i] = '\0';
		i++;
	}
	return (aux);
}

/* int main()
{
    size_t  count = 3;
    size_t size = 5;
    printf("%s\n", calloc(count,size));
    printf("%s\n", ft_calloc(count, size));
}*/