#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	int	i;

	i = 0;
	s = ft_strrchr(s, start);
	if (ft_strlen(s) < len)
	{
		len = ft_strlen(s);
	}
	res = 0;
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (*s != '\0' && len != 0)
	{
		res[i] = s[i];
		i++;
		len --;
	}
	res[i] = '\0';
}


/*
Valeur de retour
La nouvelle chaîne de caractères.
NULL si l’allocation échoue.
*/

/*
Description
Alloue (avec malloc(3)) et retourne une chaîne de caractères issue  de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ et a pour taille maximale ’len’.
*/