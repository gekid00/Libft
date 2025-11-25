/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memset.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: gekido <gekido@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/11/08 11:11:37 by rbourkai		  #+#	#+#			 */
/*   Updated: 2024/11/18 19:10:06 by gekido		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*pointer, int c, size_t	size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) pointer;
	i = 0;
	while (i < size)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (pointer);
}
