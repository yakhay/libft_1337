/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:32:56 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/25 12:45:00 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_last(char const *s1, char const *set, int j)
{
	int	i;

	i = 0;
	while (set[i] && j > 0)
	{
		if (set[i] == s1[j])
		{
			j--;
			i = -1;
		}
		i++;
	}
	return (j);
}

static int	ft_first(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (set[i] == s1[j])
		{
			j++;
			i = -1;
		}
		i++;
	}
	return (j);
}

char	*ft_strtrim(char	const	*s1, char	const	*set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	k = 0;
	if (!s1 || !set)
		return (NULL);
	i = ft_first(s1, set);
	j = ft_last(s1, set, ft_strlen(s1) - 1);
	if (j - i >= 0)
	{
		str = (char *)malloc(sizeof(char) * (j - i + 2));
		if (!str)
			return (NULL);
		while (i <= j && s1[i])
			str[k++] = s1[i++];
	}
	else
		str = malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	str[k] = '\0';
	return (str);
}
//#include <stdio.h>
//int main()
//{
//	char s1[] ="ygu";
//	char set[]="";
//	printf("/%s/\n",ft_strtrim(s1,set));
//}
