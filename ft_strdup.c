/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:05:07 by dramos-h          #+#    #+#             */
/*   Updated: 2022/12/02 10:05:19 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
/* {
	int		i;
	char	*aux;

	i = 0;
	aux = (char *)malloc((strlen(s1) + 1) * sizeof(char));
	if (!aux)
		return(0);
	while (s1[i])
	{
		aux[i] = s1[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
} */

{
	int		i;
	char	*aux;

	i = 0;
	aux = malloc((ft_strlen(s1)+1) * sizeof(char));
	if (!aux)
		return (NULL);
	while (s1[i])
	{
		aux[i] = ((char *)s1)[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

/* int main()
{
	char *s1 = "Hola mundo";
	//dst = strdup(s1);
	printf("%s\n", ft_strdup(s1));
} */