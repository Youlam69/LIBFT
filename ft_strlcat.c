
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size < lendst)
		return (size + lensrc);
	while (*src && (lendst + i + 1) < size)
		dst[lendst + i++] = *src++;
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
