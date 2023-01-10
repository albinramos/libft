/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:23:47 by dramos-h          #+#    #+#             */
/*   Updated: 2022/11/29 12:23:49 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*  int  main()
{ 
   char s[60] = "hello";
 
   printf ("%s\n", &s[2]);
   ft_bzero(s, 2);
   printf ("%s\n", &s[4]);
   return (0);
} */
