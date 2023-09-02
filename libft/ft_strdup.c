#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*str;
	size_t		index;
	size_t	lenth;

	lenth = ft_strlen(s);
	index = 0;
	if (!(str = (char*)malloc(lenth + 1)))
		return (NULL);
	while (index < lenth)
	{
		str[index] = s[index];
		index++;
	}
	return (str);
}
