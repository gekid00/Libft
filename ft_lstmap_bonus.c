/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourkai <rbourkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:23:29 by rbourkai          #+#    #+#             */
/*   Updated: 2024/11/25 17:07:59 by rbourkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*iterate(t_list *lst, void (*del)(void *), void *(*f)(void *))
{
	t_list	*new_elem;
	t_list	*new_content;
	t_list	*result;

	result = NULL;
	while (lst != NULL)
	{
		new_content = f(lst -> content);
		if (!new_content)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new_elem);
		lst = lst -> next;
	}
	return (result);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if ((!lst) || (!f) || (!del))
		return (NULL);
	return (iterate(lst, del, f));
}
