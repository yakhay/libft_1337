/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:36:48 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/25 10:00:25 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!*lst && new)
		*lst = new;
	else if (*lst && new)
	{
		list = *lst;
		while (list->next != NULL)
			list = list->next;
		list->next = new;
	}
}

/*void f(void *content)
{
	int i =0;
	while(((char *)content)[i])
		((char *)content)[i++] += 1;
}
void del(void *conent)
{
	free(conent);
}*/