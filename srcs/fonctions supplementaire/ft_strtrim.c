int	count_without_set(char *s1, char *set)
{
	int i;
	int x;
	int inter;

	i = 0;
	inter == 1;
	
	while (*s1)
	{
		x = 0;
		while(inter == 1 && set[x] != '\0')
		{
			if (set[x] == *s1)
				s1++;
				break;
			x++;
		}
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int	i;
	int x;

	i = 0;
	x = count_without_set(s1, set);
	if (ft_strlen(s) < len)
	{
		len = ft_strlen(s);
	}
	res = 0;
	res = (char *) malloc(sizeof(char) * (len + 1));
}


//trim uniquement si set premier et/ou dernier char


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