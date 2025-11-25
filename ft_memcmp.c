/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memcmp.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rbourkai <rbourkai@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/11/19 11:26:26 by rbourkai		  #+#	#+#			 */
/*   Updated: 2024/11/19 14:30:25 by rbourkai		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				count;

	count = 0;
	p1 = (const unsigned char *)ptr1;
	p2 = (const unsigned char *)ptr2;
	if (size <= 0)
		return (0);
	while (count < size)
	{
		if (p1[count] != p2[count])
			return (p1[count] - p2[count]);
		count++;
	}
	return (0);
}
