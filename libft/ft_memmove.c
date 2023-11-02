#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			i;

	i = 0;
	temp_src = (char *)src;
	temp_dest = (char*)dest;
	while (i < n)
	{
		while (i < n && temp_src[i])
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
		i++;	
	}
	return (dest);
	
}
