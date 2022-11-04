/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:19:16 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/17 16:22:00 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char	const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while (j < i)
	{
		str[j] = f(j, (char)s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
//char f(unsigned int i, char c)
//{
//    char str;
//    str = c + 1;
//    return (str);
//}
//#include <stdio.h>
//int main()
//{
//    char str1[] = "abc";
//    char* str2;
//    str2 = ft_strmapi(str1, &f);
//    printf("%s\n", str2);
//	return 0;
//}
