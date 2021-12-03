
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	diff;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	diff = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		diff = ss1[i] - ss2[i];
		if (diff != 0)
			break ;
		i++;
	}
	return (diff);
}
