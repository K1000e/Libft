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