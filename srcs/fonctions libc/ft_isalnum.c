#include "ft_isalpha.c"
#include "ft_isdigit.c"

int ft_isalnum(int c)
{
	return (ft_isdigit(c)|| ft_isalpha(c));
}