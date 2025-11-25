/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourkai <rbourkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:07:56 by rbourkai          #+#    #+#             */
/*   Updated: 2024/11/20 14:06:34 by rbourkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	count;
	size_t	count2;

	if (!str)
		return (NULL);
	if (!set || *set == '\0')
		return (ft_strdup(str));
	count = 0;
	count2 = ft_strlen(str);
	while (ft_strchr(set, str[count]) && count < count2)
		count++;
	while (ft_strchr(set, str[count2 - 1]) && count2 > 0)
		count2--;
	if (count >= count2)
		return (ft_strdup(""));
	return (ft_substr(str, count, count2 - count));
}
