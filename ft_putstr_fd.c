/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:23:27 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/22 15:47:10 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		i++;
	write(fd, s, i);
}
//#include <stdlib.h>
//#include<stdio.h>
//#include <fcntl.h>
//int main(int c, char **v)
//{
//	int fd = open("a", O_RDWR | O_CREAT | O_APPEND);
//	ft_putstr_fd(v[1],fd);
//}
