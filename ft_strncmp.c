/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <dramos-h@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:48:47 by dramos-h          #+#    #+#             */
/*   Updated: 2022/11/30 12:48:48 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
    while (i < n && (s1[i] || s2[i]))
    {
       if (s1[i] != s2[i])
           return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
       i++;
    }
    return (0);
}


/* int main ()
{
	size_t n = 11;
	const char *s1 = "Hola Mundo";
	const char *s2 = "Hola Mund";
	printf("%d\n", ft_strncmp(s1, s2, n));
	
} */
/* Sirve para comparar n caracteres entre cadena2 y 
cadena1 . Devuelve el valor devuelve 0 si son iguales. 
Devuelve menor que cero si cadena1 es menor que cadena2 . 
Devuelve mayor que cero si cadena1 es mayor que cadena2*/
