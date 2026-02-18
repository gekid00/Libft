/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_substr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rbourkai <rbourkai@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/11/19 12:08:21 by rbourkai		  #+#	#+#			 */
/*   Updated: 2024/11/19 14:37:02 by rbourkai		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t size)
{
	size_t	count;
	size_t	len;
	char	*result;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	if (start >= len)
		return (ft_strdup(""));
	if (size > len - start)
		size = len - start;
	result = malloc(size * (sizeof(char)) + 1);
	if (!result)
		return (NULL);
	count = 0;
	while (str[start + count] && count < size)
	{
		result[count] = str[start + count];
		count++;
	}
	result[count] = '\0';
	return (result);
}
