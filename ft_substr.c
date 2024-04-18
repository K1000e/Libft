/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:13:26 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/12 01:45:47 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t		i;

	i = 0;
	while (*s != (char)start)
		s++;
	res = 0;
	res = (char *) malloc(sizeof(char) * (len));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	while (*s + i && i < len)
	{
		res[i] = *s + i;
		i++;
	}
	return (res);
}


/* int main()
{
	printf("ft_substr : %s\n", ft_substr("Test", 's', 5));
	//printf("strsub : %d\n", strsub("Test", 's', 5));
	return (0);
}
 *//*
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