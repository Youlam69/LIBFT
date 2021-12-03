
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst1;
	unsigned char *src1;

	if (!dst && !src)
		return (0);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (src < dst)
	{
		while (len--)
			dst1[len] = src1[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
