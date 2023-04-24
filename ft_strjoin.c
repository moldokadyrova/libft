/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:16:30 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/23 14:46:01 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char *)malloc(len1 + len2 + 1);
	if (!res)
	{
		return (NULL);
	}
	ft_memcpy(res, s1, len1);
	ft_memcpy(res + len1, s2, len2 +1);
	return (res);
}
// The function ft_strjoin concatenates two strings into
// a new string and returns the new string
// Function description:

// Calculate the length of the strings s1 and s2 using the ft_strlen function.
// Allocate memory for the new string with a size of len1 + len2 + 1 
// (plus one byte for the null terminator '\0').
// Copy the contents of the string s1 into the
// new string using the ft_memcpy function.
// Copy the contents of the string s2 into the new string starting
// from the end of the string s1 using the ft_memcpy function.
// Add the null terminator '\0' to the end of the new string.
// Return the new string.
// If the strings s1 or s2 are not provided, the function returns NULL.