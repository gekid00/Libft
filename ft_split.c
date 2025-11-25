/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourkai <rbourkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:12:46 by rbourkai          #+#    #+#             */
/*   Updated: 2024/11/24 13:57:29 by rbourkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeall(char **result, size_t x)
{
	size_t	i;

	i = 0;
	while (i < x)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_countword(const char *s, char c)
{
	size_t	word;
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	word = 0;
	while (s[count])
	{
		while (s[count] == c)
			count++;
		if (s[count])
		{
			word++;
			while (s[count] != '\0' && s[count] != c)
				count++;
		}
	}
	return (word);
}

static char	*ft_getword(const char *s, size_t *count, char c)
{
	size_t	count2;
	char	*result;
	size_t	i;
	size_t	len;

	count2 = *count;
	while (s[*count] && s[*count] != c)
		(*count)++;
	len = *count - count2;
	result = malloc((len + 1) * sizeof (char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[count2 + i];
		i++;
	}
	result[i] = '\0';
	if (s[*count] == c)
		(*count)++;
	return (result);
}

static char	**ft_putlist(char**result, size_t word, char*s, char c)
{
	size_t	count;
	size_t	x;

	x = 0;
	count = 0;
	while (s[count] && x < word)
	{
		while (s[count] == c)
			count++;
		result[x] = ft_getword(s, &count, c);
		if (!result[x])
		{
			ft_freeall(result, x);
			return (NULL);
		}
		x++;
	}
	result[x] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word;

	if (!s)
		return (NULL);
	word = ft_countword(s, c);
	result = (char **)malloc((word + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!ft_putlist(result, word, (char *)s, c))
		return (NULL);
	return (result);
}
