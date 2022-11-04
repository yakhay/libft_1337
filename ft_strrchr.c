/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:20:03 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/25 12:44:48 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test(const char *s, int c)
{
	int	j;

	j = 0;
	while (s[j])
	{
		if (s[j] == (char )c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen(s);
	i = 0;
	if ((char)c == s[len])
		return ((char *)s + len);
	while (s[i])
	{
		if (test(s + i + 1, c) == 0)
		{
			if (s[i] == (char )c)
				return (((char *)s + i));
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("%s",ft_strrchr("teste", '\0'));
}
*/
