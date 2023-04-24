/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:36:14 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/23 14:32:39 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
// The ft_memcpy function copies n bytes from the
// memory area pointed to by src to the memory
// area pointed to by dst. If the memory areas
// overlap, the result of the copy is undefined.

// The function takes three parameters: pointers
// to dst (the memory area where the data is copied to),
// src (the memory area where the data is copied from),
// and n (the number of bytes to copy).

// The function returns a pointer to dst.

// In a loop, the function iterates through each byte
// in the memory area pointed to by src and copies it
// to the corresponding byte in the memory area pointed to by dst.

// The function uses explicit type casting
// to unsigned char * to ensure that individual bytes
// are copied rather than whole words.

// If the value of n is 0 or the pointers dst and src
// point to the same memory area, the function simply returns a pointer to dst.