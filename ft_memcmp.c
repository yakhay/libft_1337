/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:38:58 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/25 18:43:02 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		res;

	res = 0;
	i = 0;
	while (i < n)
	{
		res = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (res != 0)
			return (res);
		i++;
	}
	return (res);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	printf("%d",memcmp("khay",NULL,3));
// }