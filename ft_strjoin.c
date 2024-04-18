/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:13:19 by cgorin            #+#    #+#             */
/*   Updated: 2024/03/31 20:34:00 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		x;
	int		j;
	int		i;

	x = ft_strlen(s1) + ft_strlen(s2);
	res = 0;
	res = (char *) malloc(sizeof(char) * (x + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1 [i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

/* 
Valeur de retour
La nouvelle chaîne de caractères.
NULL si l’allocation échoue.
*/
/*
Description
Alloue (avec malloc(3)) et retourne une nouvelle chaîne, 
résultat de la concaténation de s1 et s2. 
*/