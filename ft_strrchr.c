/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:14:36 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/12 01:18:03 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int x;

	x = ft_strlen(s);
	while (x >= 0)
	{
		if (s[x] == (char)c)
			return ((char *)s + x);
		x--;
	}
	return (NULL);
}
/* 
#include <stdio.h>

 int main()
 {
	const char *test = "Hello World";

	printf("%s\n", test);
	printf("%s\n", ft_strrchr(test, 'o'));
 }  */
