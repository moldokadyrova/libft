/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:56:06 by emoldoka          #+#    #+#             */
/*   Updated: 2023/04/23 14:24:08 by emoldoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && !word)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (count);
}

static char	*ft_copy_word(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (0);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

static void	ft_free_words(char **words, size_t word_count)
{
	while (word_count > 0)
		free(words[--word_count]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (0);
	word_count = ft_count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (0);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		arr[i] = ft_copy_word(s, c);
		if (!arr[i])
		{
			ft_free_words(arr, i);
			return (0);
		}
		s += ft_strlen(arr[i++]);
	}
	arr[i] = 0;
	return (arr);
}
// The function is used to split a string into words separated by
// the specified delimiter character c. It returns a
// two-dimensional array of strings (char **), where
// each element is a separate word from the original
// string. The last element of the array is set to NULL.

// The function first checks that the input string s
// is not a null pointer. Then it calls a helper function
// ft_count_words, which counts the number of words
// in the string separated by the c character.

// Then memory is allocated for an array of
// pointers to strings arr, which will store
// each individual word. The size of the array is equal