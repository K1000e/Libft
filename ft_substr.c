/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:13:26 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/23 00:00:17 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
			return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
            res[j] = s[i];
			j++;
        }
		i++;
	}
	res[j] = '\0';
	return (res);
}

/* int main()
{
	printf("ft_substr : %s\n", ft_substr("Test 1234", 's', 5));
	printf("ft_substr : %s\n", ft_substr("Test de test", 's', 5));
	printf("ft_substr : %s\n", ft_substr("Hello World", 's', 5));
	printf("ft_substr : %s\n", ft_substr("Test", 's', 1));
	printf("ft_substr : %s\n", ft_substr("Test 1234", 's', -15));
	printf("ft_substr : %s\n", ft_substr("Test de test", 's', 25));
	printf("ft_substr : %s\n", ft_substr("Hello World", 's', 1));
	printf("ft_substr : %s\n", ft_substr("Test", 's', 1));
	return (0); 
} */

/*
Valeur de retour
La nouvelle chaîne de caractères.
NULL si l’allocation échoue.
*/

/*
Description
Alloue (avec malloc(3)) et retourne une chaîne de 
caractères issue  de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ 
et a pour taille maximale ’len’.
*/