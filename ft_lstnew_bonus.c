/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourkai <rbourkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:17:31 by rbourkai          #+#    #+#             */
/*   Updated: 2024/11/25 09:51:34 by rbourkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_change;

	new_change = (t_list *) malloc(sizeof(t_list));
	if (!new_change)
		return (NULL);
	new_change -> content = content;
	new_change -> next = NULL;
	return (new_change);
}
