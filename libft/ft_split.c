/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:46:08 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/20 20:46:10 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// 
// static int	ft_check_sep(char c, char sep)
// {
	// return (c == sep);
// }
// 
// static int	ft_strings(const char *s, char sep)
// {
	// size_t	i;
	// size_t	count;
// 
	// count = 0;
	// i = 0;
	// while (s[count])
	// {
		// while (s[count] && ft_check_sep(s[count], sep))
			// count++;
		// if (s[count])
			// i++;
		// while (s[count] && !ft_check_sep(s[count], sep))
			// count++;
	// }
	// return ((int)i);
// }
// 
// static int	ft_strtosep(const char *s, char sep)
// {
	// int	count;
// 
	// count = 0;
	// while (s[count] && !ft_check_sep(s[count], sep))
		// count++;
	// return (count);
// }
// 
// static char	*ft_put_word(const char *s, char sep, char **dup, int i)
// {
	// int	count;
	// int	len;
// 
	// count = 0;
	// len = ft_strtosep(s, sep);
	// dup[i] = (char *)malloc(sizeof(char) * (len + 1));
	// if (!dup[i])
	// {
		// while (--i >= 0)
		// {
			// free(dup[i]);
		// }
		// free(dup);
		// return (NULL);
	// }
	// while (count < len)
	// {
		// dup[i][count] = s[count];
		// count++;
	// }
	// dup[i][count] = '\0';
	// return (dup[i]);
// }
// 
// char	**ft_split(const char *s, char c)
// {
	// char	**av;
	// int		count;
// 
	// count = 0;
	// if (!s)
	// {
		// av = malloc(1);
		// av[0] = NULL;
		// return (&av[0]);
	// }
	// av = (char **)malloc(sizeof(char *) * (ft_strings(s, c) + 1));
	// if (!av)
		// return (NULL);
	// while (*s)
	// {
		// while (*s && ft_check_sep(*s, c))
			// s++;
		// if (*s)
		// {
			// if (ft_put_word(s, c, av, count) == NULL)
				// return (NULL);
			// count++;
		// }
		// while (*s && !ft_check_sep(*s, c))
			// s++;
	// }
	// av[count] = NULL;
	// return (av);
// }
// 
// 

#include "libft.h"

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