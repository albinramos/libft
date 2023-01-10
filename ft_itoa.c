/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:18:02 by dramos-h          #+#    #+#             */
/*   Updated: 2022/12/28 11:18:08 by dramos-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	itoa_isnegative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char	*ft_itoa(int n)
{
	int		aux;
	int		len;
	int		negative;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	aux = n;
	len = 1;
	negative = 0;
	itoa_isnegative(&n, &negative);
	while (aux /= 10)
		len++;
	len += negative;
	if ((str = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}

/* int main ()
{
	int x = -2147483648;
	char *str = ft_itoa(x);
	printf("%s", str);
	return(0);
} */
