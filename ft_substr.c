/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:00:06 by dramos-h          #+#    #+#             */
/*   Updated: 2022/12/20 09:00:09 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	aux = (char *)malloc((len + 1) * sizeof(char));
	if (!aux)
		return (0);
		i = 0;
	while (start > ft_strlen(s))
	{
		aux[i] = '\0';
		return (aux);
	}
	while (len > 0 && s[start])
	{
		aux[i] = s[start];
		i++;
		start++;
		len--;
	}
	aux[i] = '\0';
	return (aux);
}

/* int  main(void)
{
   char s[] = "holaholahola";
 
   printf("%s\n", ft_substr(s, 1, 10));
   return (0);
} */