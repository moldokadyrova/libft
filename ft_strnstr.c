/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:42:30 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/05 19:51:37 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_l;

	if (*needle == 0)
		return ((char *)haystack);
	needle_l = ft_strlen(needle);
	while (*haystack != 0 && len-- >= needle_l)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, needle_l) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
