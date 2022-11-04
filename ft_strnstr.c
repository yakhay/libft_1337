/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:47:09 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/18 15:21:04 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	k;
	size_t	c;

	c = 0;
	k = 0;
	if (!str && len == 0)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[c] && c < len)
	{
		k = 0;
		while (to_find[k] && str[c + k] == to_find[k] && c + k < len)
			k++;
		if (to_find[k] == '\0')
			return ((char *)(str + c));
		c++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("%s\n%s", ft_strnstr(haystack, "cd", 8), strnstr(haystack, "cd", 8));
}*/
