int	toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}