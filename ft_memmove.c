
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (src < dst)
	{
		while (len--)
			dst1[len] = src1[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
