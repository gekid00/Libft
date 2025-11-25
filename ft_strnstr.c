/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourkai <rbourkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:43:57 by rbourkai          #+#    #+#             */
/*   Updated: 2024/11/25 10:24:51 by rbourkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	count;
	size_t	count2;

	count = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[count] && count < len)
	{
		count2 = 0;
		if (str[count] == to_find[count2])
		{
			while (str[count + count2] && to_find[count2]
				&& str[count + count2] == to_find[count2]
				&& (count + count2) < len)
					count2++;
			if (to_find[count2] == '\0')
				return ((char *)&str[count]);
		}
		count++;
	}
	return (NULL);
}
