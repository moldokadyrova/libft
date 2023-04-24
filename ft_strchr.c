/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:15:54 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/23 14:40:23 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s != 0)
	{
		if (*s == ch)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == ch)
	{
		return ((char *)s);
	}
	return (NULL);
}
// The ft_strchr function locates the first occurrence of the character c
// in the string s. The function returns a pointer to the located character
// in the string s. If the character c is not found in the string s,
// the function returns a null pointer (NULL).

// The function takes two parameters:
// s: pointer to the string in which to search for the character c.
// c: the character to be located, expressed as an integer (int).
// First, the function declares the variable ch and initializes
// it to the value of the character c. Then, it starts iterating
// through the characters in the string s using a while loop.
// If the current character in the string is equal to the character c,
// the function returns a pointer to that character in the string s.
// If the character c is not found in the string s, the function
// returns a null pointer (NULL).