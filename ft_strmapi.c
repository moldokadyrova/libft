/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:03:13 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/08 20:07:14 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (0);
		str = ft_strdup(s);
	if (!str)
		return (0);
		i = 0;
	while (str[i])
	{
			str[i] = f(i, str[i]);
			i++;
	}
	return (str);
}
