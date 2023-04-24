/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:55:19 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/05 19:15:19 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*l;

	l = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			l = s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return ((char *)l);
}
