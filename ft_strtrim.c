/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:50:39 by dramos-h          #+#    #+#             */
/*   Updated: 2023/01/09 13:50:41 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
char    *ft_strtrim(char const *s1, char const *set)
{  
   size_t  i;
 
   if (!s1 || !set)
       return (0);
   while (*s1 && ft_strchr(set, *s1))
       s1++;
   i = ft_strlen(s1);
   while (i && ft_strchr(set, *(s1 + i)))
       i--;
   return (ft_substr(s1, 0, i + 1));
}
 
/*int   main(void)
{
   char    *s1 = "xhellox";
   char    *set = "x";
 
   ft_strtrim(s1, set);
   printf("%s", s1);
   return(0);
}*/

