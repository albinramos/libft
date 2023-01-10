/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:46:44 by dramos-h          #+#    #+#             */
/*   Updated: 2022/12/28 11:46:47 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name    | ft_striteri
// Prototype        | void ft_striteri(char *s, void (*f)(unsigned int, char*));
// Turn in files    | -
// Parameters       | s: The string on which to iterate.
//					| f: The function to apply to each character.
// Return value     | None
// External functs. | None
// Description      | Applies the function ’f’ on each character of the string 
//					| passed as argument, passing its index as first argument. 
//					| Each character is passed by address to ’f’ to be modified
//					| if necessary.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
