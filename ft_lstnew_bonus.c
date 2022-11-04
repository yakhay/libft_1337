/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:25:11 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/21 11:30:58 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*khay;

	khay = (t_list *)malloc(sizeof(t_list));
	if (!khay)
		return (NULL);
	khay->content = content;
	khay->next = NULL;
	return (khay);
}
//#include <stdio.h>
//int main()
//{
//	int c = 4;
//	printf("%d",*((int *)ft_lstnew(&c)->content));
//}
