/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:36:15 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/25 12:43:10 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_ff(int nb, int fd)
{
	int	i;
	int	k;

	i = 1;
	k = nb;
	while (k / 10 != 0)
	{
		i *= 10;
		k /= 10;
	}
	while (i >= 1)
	{
		k = nb / i + 48;
		ft_putchar(k, fd);
		nb %= i;
		i /= 10;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-214748364", 10);
		nb = 8;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	ft_ff(nb, fd);
}
//#include <fcntl.h>
//int main()
//{
//
//	int fd = open("b.txt",O_RDWR | O_CREAT, 0777);
//	ft_putnbr_fd(-665,fd);
//}
