/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:17:51 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/25 20:04:20 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*next;

	if (!lst)
		return ;
	list = *lst;
	while (list && del)
	{
		next = list->next;
		ft_lstdelone(list, del);
		list = next;
	}
	*lst = NULL;
}

/*int main()
{
	t_list *had;
	t_list *yas;
	//int **tmp = &((int *)had->content);
    t_list *s;
    char *a;
    char *b;
    char *c;
    had = ft_lstnew(a);
    yas = ft_lstnew(b);
    s = ft_lstnew(c);
    ft_lstadd_back(&had,yas);
    ft_lstadd_back(&yas,s);
    a = ft_strdup("safae");
    b = ft_strdup("menani");
    c = ft_strdup("meftah");
    //ft_lstclear(&had,del);
	system("leaks ana");
}
*/
