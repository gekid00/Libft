/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memcpy.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: gekido <gekido@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/11/08 14:52:01 by rbourkai		  #+#	#+#			 */
/*   Updated: 2024/11/18 19:10:06 by gekido		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *pointer, size_t size)
{
	unsigned char	*src;
	unsigned char	*destin;
	size_t			i;

	if (!dest && !pointer && size > 0)
		return (NULL);
	src = (unsigned char *) pointer;
	destin = (unsigned char *) dest;
	i = 0;
	while (i < size)
	{
		*destin = *src;
		src++;
		destin++;
		i++;
	}
	return (dest);
}
