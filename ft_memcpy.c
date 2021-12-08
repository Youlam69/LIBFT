
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*dst1;
	char			*src1;

	if (!dst && !src)
		return (0);
	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	while (i < n)
	{
		dst1[i++] = *src1++;
	}
	return (dst);
}
