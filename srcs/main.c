#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


int	ft_isalpha(int c)
{
	return (c >= 65 && c <= 90 || c >= 97 && c <= 122);
}

int ft_isalnum(int c)
{
	return (ft_isdigit(c)|| ft_isalpha(c));
}


int	main()
{	printf("%i", isalnum('9'));
	return 0;
}