
#include "libft.h"
#include <stdio.h>

size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	word;
	int		i;

	str = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word = ft_strlen(s);
			else
				word = ft_strchr(s, c) - s;
			str[i++] = ft_substr(s, 0, word);
			s += word;
		}
	}
	str[i] = NULL;
	return (str);
}

// int main()
// {
// 	char str[] = "   lorem   ipsum dolor     sit amet,
//		consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
// 	char c = ' ';
// 	char **arr;
//     int i = -1;
// 	arr = ft_split(str,c);
//     while (arr[++i])
//         printf("%s\n",arr[i]);
// }
