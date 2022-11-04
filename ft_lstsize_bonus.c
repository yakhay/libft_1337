/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:59:23 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/16 15:08:35 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
//#include <stdio.h>
//int main()
//{
//	t_list *yass = NULL;
//	t_list *khay = NULL;
//	t_list *me = NULL;
//	yass = (t_list *)malloc(sizeof(t_list));
//	khay = (t_list *)malloc(sizeof(t_list));
//	me = (t_list *)malloc(sizeof(t_list));
//	int c = 3;
//	int b = 1;
//	int a = 2;
//	yass->content = &b;
//	yass->next = khay;
//
//
//	khay->content = &a;
//	khay->next = me;
//	me->content = &c;
//	me->next = NULL;
//	printf("%d\n",ft_lstsize(yass));
//
//}
