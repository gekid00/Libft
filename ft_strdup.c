/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strdup.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rbourkai <rbourkai@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/11/18 19:12:03 by gekido			#+#	#+#			 */
/*   Updated: 2024/11/19 14:38:27 by rbourkai		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*memory;
	size_t	count;

	count = 0;
	size = ft_strlen(src) + 1;
	memory = malloc(size);
	if (!memory)
		return (NULL);
	while (src[count] != '\0')
	{
		memory[count] = src[count];
		count++;
	}
	memory[count] = '\0';
	return (memory);
}
