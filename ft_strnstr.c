/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:13:11 by dramos-h          #+#    #+#             */
/*   Updated: 2022/12/01 10:13:14 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

/* int  main(void)
{
    const char  *haystack = "hola que";
    const char  *needle = "que";
    printf("%s\n", needle);
    printf("%s\n", ft_strnstr(haystack, needle,8));
    printf("%s", strnstr(haystack, needle,8));
} */

/* int main()
{
	char haystack[] = "Hola Mundo";
	char needle[] = "o";
	size_t len = 2;
	printf("%s\n", ft_strnstr(haystack, needle, len));
	
}  */

/*        strnstr - Find the first substring in a length-limited string

SYNOPSIS

       char * strnstr(const char * s1, const char * s2, size_t len);

ARGUMENTS

       s1
	   The string to be searched

       s2
	   The string to search for

       len
	   the maximum number of characters to search */