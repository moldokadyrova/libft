/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:43:44 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/23 14:38:22 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// This function ft_memset is used to fill
// a block of memory with a particular value.
// The function takes three arguments: a pointer
// to the block of memory, the value to set, and the number of bytes to set.

// The function works as follows: it fills the block
// of memory pointed to by the argument b with the value c,
// repeating this len times. This is done using a loop
// that iterates over each byte of the block of memory and 
// sets it to the value c.