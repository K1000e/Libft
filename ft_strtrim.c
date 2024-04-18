/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:13:24 by cgorin            #+#    #+#             */
/*   Updated: 2024/03/31 19:51:54 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_set(const char s1, const char *set)
{
	int	x;

	x = 0;
	while (set[x] != '\0')
	{
		if (set[x] == s1)
			return (1);
		x++;
	}
	return (0);
}

char const	*start_str(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (*s1)
	{
		if (find_set(s1[i], set) == 0)
			return (s1);
		s1++;
	}
	return (s1);
}

int	end_str(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	while (find_set(s1[i - 1], set) == 1)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		len;

	s1 = start_str(s1, set);
	len = end_str(s1, set);
	i = 0;
	res = 0;
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (s1[i] != '\0' && len != 0)
	{
		res[i] = s1[i];
		i++;
		len--;
	}
	res[i] = '\0';
	return (res);
}

/* Function name 
ft_strtrim

char *ft_strtrim(char const *s1, char const *set);

Paramètres
s1: La chaîne de caractères à trimmer.
set: Le set de référence de caractères à trimmer.

Valeur de retour
La chaîne de caractères trimmée.
NULL si l’allocation échoue.

Fonctions externes autorisées
malloc

Description
Alloue (avec malloc(3)) et retourne une copie de
la chaîne ’s1’, sans les caractères spécifiés
dans ’set’ au début et à la fin de la chaîne de
caractères. */