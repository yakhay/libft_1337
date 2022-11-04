/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:39:46 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/25 20:06:02 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;
	char	*ss;

	if (!dest && size == 0)
		return (0);
	destlen = ft_strlen(dest);
	ss = (char *)src;
	srclen = ft_strlen(ss);
	i = 0;
	if (size == 0 || size <= destlen)
		return (srclen + size);
	while (ss[i] && i < size - destlen - 1)
	{
		dest[destlen + i] = ss[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
/*#include <string.h>
int main()
{
            char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}*/
