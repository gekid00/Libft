/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memchr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: gekido <gekido@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/11/12 14:51:56 by rbourkai		  #+#	#+#			 */
/*   Updated: 2024/11/18 19:10:06 by gekido		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t size)
{
	unsigned char	*ptr;
	size_t			x;

	ptr = (unsigned char *) src;
	x = 0;
	while (x < size)
	{
		if (ptr[x] == (unsigned char)c)
			return ((void *) &ptr[x]);
		x++;
	}
	return (NULL);
}
