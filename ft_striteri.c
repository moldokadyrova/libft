/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:09:52 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/23 14:44:07 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == 0 || f == 0)
		return ;
		i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
			i++;
	}
}
// The function ft_striteri applies a given function
// f to each character of the string s, passing to
// it both the current character and its index.
// s - pointer to the string to be processed
// f - pointer to the function to be applied to each character of the string
// The function does not return anything.

// The process of the function:
// If the string s or the function f is null, the function exits.
// Initializes the variable i to 0.
// While the character in the string s[i] is not zero:
// The function f is called with arguments
// i and &s[i] (the address of the current character in the string).
// The value of i is increased.
// The result is the processed string. The ft_striteri
// function is useful when a specific action needs to be
// applied to each character in a string, such as changing
// the case of characters or replacing specific characters.