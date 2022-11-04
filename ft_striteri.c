/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:27:32 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/23 16:30:24 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
void f(unsigned int i, char *c)
{
	*c = *c + 1;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*#include <stdio.h>
int main()
{
	char *t = ft_strdup("yassinekhat");
	ft_striteri(t,f);
	printf("%s",t);
}*/
