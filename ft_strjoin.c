/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:29:57 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/22 15:38:57 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;
	char	*s3;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	s3 = malloc(sizeof(char) *(lens1 + lens2 + 1));
	if (!s3)
		return (NULL);
	while (j < lens1 && s1[i])
		s3[i++] = s1[j++];
	j = 0;
	while (j < lens2)
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
