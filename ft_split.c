/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgorin <cgorin@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 21:14:19 by cgorin            #+#    #+#             */
/*   Updated: 2024/04/12 21:55:41 by cgorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int find_set(const char s1, const char *set)
{
	int x;
	
	x = 0;
	while (s1[x] != '\0')
	{
		if (set[x] == s1)
			return (1);
		x++;
	}
	return (0);
}
int total_len(char const *s1, char set)
{
	
} */
int search_next_sep(const char *s,  char c)
{
	int x;
	
	x = 0;
	while (s[x] != '\0' && s[x] != c)
		x++;
	return (x);
}

int count_word(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i - 1] != c) && i &&  s[i + 1] != '\0')
		{
			count++;
		}
		i++;
		//if (!find_set(s1[i], set) && (find_set(s1[i], set)) || i = 0)
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char **res;
	int y;
	int z;
	
	y = 0;
	res = 0;
	res = (char **) malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c)
				*res = (char *) malloc(sizeof(char) * (search_next_sep(s, c) + 2));
		}
		z = 0;
		while (*s != c)
		{
			res[y][z/*++*/] = *s/*++*/;
			s++;
			z++;
		}
		res[y][z] = '\0';
		y++;
	}
	res[y] = NULL;
	return (res);
}
