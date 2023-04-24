/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:07:54 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/23 15:59:46 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	int			i;
	char		*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		i = -1;
	else
		i = 1;
	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len--)
	{
		str[len] = ((n % 10) * i) + '0';
		n /= 10;
	}
	if (i == -1)
		str[0] = '-';
	return (str);
}
// The ft_itoa function converts an integer value
// to a character string. The function takes an
// integer value as its argument and returns a
// pointer to a new string containing the integer
// value as characters. The function takes into
// account the sign of the number and can handle
// negative values. If the value of the argument
// n is equal to -2147483648, the function returns
// a pointer to a new string containing "-2147483648".
