/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:36:42 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/23 14:42:03 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dub;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dub = (char *)malloc(sizeof(char) * len);
	if (!dub)
	{
		return (0);
	}
	ft_memcpy(dub, s1, len);
	return (dub);
}
// The ft_strdup function creates a new dynamically allocated
// string that is a duplicate of the string s1. This function uses
// the ft_memcpy function to copy the contents of the s1 string
// to the new string.

// The argument s1 is a pointer to the string to be copied.
// The function first calculates the length of the s1 string,
// including the null terminator, and allocates enough memory
// for the new dub string. Then it copies the contents of the s1
// string to the new string using the ft_memcpy function and
// returns a pointer to the new string.

// If memory cannot be allocated for the new string,
// the function returns a null pointer.