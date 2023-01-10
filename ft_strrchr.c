/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:26:31 by dramos-h          #+#    #+#             */
/*   Updated: 2022/11/30 12:26:33 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (((char *)s)[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (((char *)s)[i] == (char)c)
			return ((char *)&s[i]);
			i--;
	}
	return (0);
}

/* int main(void)
{
	const char s[] = "abdefg";
	int c = 'd';

	printf("%s",ft_strrchr(s,c));
} */