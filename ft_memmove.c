/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:07:53 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/23 14:35:48 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s)
		return (dst);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
		while (len--)
			d[len] = s[len];
	return (dst);
}
// The ft_memmove function copies len bytes from
// the memory area pointed to by src to the memory
// area pointed to by dst. Unlike the ft_memcpy function,
// ft_memmove can handle situations where src and dst overlap.

// The function begins by casting pointers to dst and src
// to type unsigned char *. Then, it checks if the memory areas
// overlap. If they do, the function copies the data starting
// from the least significant bytes to avoid errors.

// If dst is located before src in memory, the function copies
// the data one byte at a time, starting from the first and
// ending with the last byte. If dst is located after src, the function
// copies the data in reverse order to avoid overwriting already copied data.

// The function returns a pointer to the memory area pointed to by dst.