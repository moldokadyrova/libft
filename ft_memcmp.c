/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:51:34 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/08 17:35:54 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					a;
	const unsigned char	*p1;
	const unsigned char	*p2;

	a = 0;
	p1 = s1;
	p2 = s2;
	while (n-- > 0 && a == 0)
	{
		a = *p1++ - *p2++;
	}
	return (a);
}
