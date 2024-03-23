// Inclut la bibliothèque standard pour les entrées/sorties en mode terminal
#include <stdio.h>
 #include <stdlib.h>



int	ft_atoi(const char *str)
{
	int res;
	int	sign;

	res = 0;
	sign = 1;
	if (!str)
		return (res);
	while (*str != 0 && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
			str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		{
			res = (res * 10) + (*str - '0');
			str++;
		}
	return(res * sign);
}



/** Point d'entré du programme */
int main(int argc, char* argv[]) {

    /* Affiche l'aide si aucun paramètre */
    if (argc == 1) {
        printf("Usage: %s NOMBRE\n", argv[0]);
        puts("Affiche le nombre passé en paramètre sur la sortie standard.");
        //return 0;
    }

    // Affiche le nombre passé en paramètre
    
	printf("ft_atoi : %d\n", ft_atoi(argv[1]));
	printf("atoi : %d\n", atoi(argv[1]));

    // Pas d'erreur
    return 0;
}