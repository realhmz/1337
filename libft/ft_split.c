#include "libft.h"

void	skip_charset(char *str, char *charset, int *i)
{
	while (str[*i] == charset[0])
		*i = *i + 1;
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str && str[i])
	{
		while (str[i] == charset[0])
			i++;
		if (str[i] != charset[0] && str[i])
		{
			count++;
			while (str[i] != charset[0] && str[i])
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char	**ret;

	i = 0;
	j = 0;
	k = 0;
	count = word_count((char *)str, &c);
	ret = (char **)malloc(sizeof(char *) * (count + 1));
	while (str[i])
	{
		skip_charset((char *)str, &c, &i);
		if (str[i] != c && str[i])
		{
			j = i;
			while (str[i] != c && str[i])
				i++;
			ret[k] = ft_substr((char *)str, j, i);
			k++;
		}
	}
	ret[k] = 0;
	return (ret);
}
