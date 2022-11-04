/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:37:05 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/21 20:06:59 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*liist;
	t_list	*item;

	item = NULL;
	while (lst && f)
	{
		liist = ft_lstnew(f(lst->content));
		if (!liist)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&item, liist);
		lst = lst->next;
	}
	return (item);
}
