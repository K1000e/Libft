/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:13:24 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/22 23:58:37 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int	start_str(const char *s1, const char *set)
{
	int	x;
	int	i;

	i = 0;
	while (s1[i])
	{
		x = 0;
		while (set[x])
		{
			if (set[x] == s1[i])
				break ;
			x++;
		}
		if (set[x] != s1[i])
			return (i);
		i++;
	}	
	//printf("start %d\n", i);
	return (i);
}

int	end_str(char const *s1, char const *set)
{
	int	i;
	int	x;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		x = 0;
		while (set[x])
		{
			if (set[x] == s1[i])
				break ;
			x++;
		}
		if (set[x] == s1[i])
			i++;
		else 
		    return (i);
	}
	//printf("end %d\n", i);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		start;
	int		end;
	int		len;

	if (!s1)
	    return (NULL);
	start = start_str(s1, set);
	end = end_str(s1, set) + 1;
	len = end - start;
	if (len <= 0)
	    return (ft_strdup(""));
	//printf("%d\n", len);
	//if (start > end)
	    //return (ft_strdup(""));
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && i < len &&start < end)
	{
		res[i++] = s1[start++];
		//i++;
	}
	res[len] = '\0';
	return (res);
}

/* int main(void)
{
	 char *s1;
	char *set;

	s1 = "  abc";
	set = " "; 
	printf("%s\n", ft_strtrim("		  	 	Before to trim   ", " 	"));
	return (0);
} */

/* Function name
ft_strtrim

char		*ft_strtrim(char const *s1, char const *set);

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