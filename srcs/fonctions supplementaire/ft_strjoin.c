#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int x;
	int j;
	int i;
	
	x = ft_strlen(s1) + ft_strlen(s2);
	res = 0;
	res = (char *) malloc(sizeof(char) * (x + 1));
	if (res == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1 [i];
		i++;
	}
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