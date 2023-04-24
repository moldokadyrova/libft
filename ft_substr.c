/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:47:08 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/05 16:15:14 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
	{
		return (0);
	}
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
	{
		return (0);
	}
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
