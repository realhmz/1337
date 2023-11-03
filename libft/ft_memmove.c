#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	
	i = 0;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
		{
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;	
		}
	
	return (dest);
}
#include <stdio.h>

int main(){
	char str[] = "helloooo";
	char str1[] = "world";
	ft_memmove(str,str1,0);
	printf("%s",str);
}
