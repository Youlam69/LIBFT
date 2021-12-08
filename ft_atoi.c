
// int		ft_atoi(const char *str)
// {
// 	int i;
// 	int res;
// 	int sign;

// 	i = 0;
// 	res = 0;
// 	sign = 1;
// 	while ((str[i] == ' ') || (str[i] >= 7 && str[i] <= 13))
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
// 	{
// 		res = (res * 10) + (str[i] - '0');
// 		i++;
// 	}
// 	return (res * sign);
// }
#include "libft.h"

int		ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= 7 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	return (res * sign);
}
