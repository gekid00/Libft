/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourkai <rbourkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:35:53 by rbourkai          #+#    #+#             */
/*   Updated: 2024/11/20 12:00:52 by rbourkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	total_len;
	size_t	count;
	size_t	count2;
	char	*result;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	count = 0;
	count2 = 0;
	result = ft_calloc(total_len + 1, 1);
	if (!result)
		return (NULL);
	while (s1[count])
	{
		result[count] = s1[count];
		count++;
	}
	while (s2[count2])
	{
		result[count] = s2[count2];
		count2++;
		count++;
	}
	return (result);
}
