/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:13:39 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/25 12:41:10 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_power(int nb, int k)
{
	int	i;
	int	c;

	c = 2;
	i = 1;
	while (nb / 10 != 0)
	{
		nb /= 10;
		i *= 10;
		c++;
	}
	if (k == 1)
		return (i);
	else if (k == 0)
		return (c);
	return (-1);
}

static int	ft_pp(long n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		c;

	nb = n;
	n = ft_pp(nb);
	if (nb < 0)
		nb *= -1;
	str = (char *)malloc((ft_power(nb, 0) + n) * sizeof(char));
	if (!str)
		return (NULL);
	c = 0;
	if (n == 1)
		str[c++] = '-';
	n = ft_power(nb, 1);
	while (n >= 1)
	{
		str[c++] = nb / n + 48;
		nb %= n;
		n /= 10;
	}
	str[c] = '\0';
	return (str);
}
//#include<stdio.h>
//int main()
// {
//	int t = 1337;
//	printf("%s",ft_itoa(t));
//}
