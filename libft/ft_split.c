/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:18:51 by het-taja          #+#    #+#             */
/*   Updated: 2023/11/05 14:18:53 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char **ft_split(char const *s, char c)
{
    int i;
    int count;
    int h;
    int f;
    int count1;
    char **str;

    i = 0;
    count = 0;
    count1 = 0;
    h = 0;
    f = 0;
    
    if (!(str = (char **)malloc(sizeof(char *))))
		return (NULL);
    while (s && s[i])
    {
        if (s[i] == c)
        {
            if (!(str[h] = (char *)malloc(i - count + 1)))
                return (NULL);
            while (count1 < i)
            {
                str[h][f] = s[count1];
                f++;
                count1++;
            }
            str[h][f] = '\0';
            count = i + 1;
            h++;
            f = 0;
        }
        i++;
    }
    str[h] = (char *)malloc(i - count + 1);
    if (!str[h])
        return (NULL);
    while (count1 < i)
    {
        str[h][f] = s[count1];
        f++;
        count1++;
    }
    str[h][f] = '\0';
    str[h + 1] = NULL;
    return str;
}

int main()
{
    char str1[] = "hello world salam";
    char **result = ft_split(str1, ' ');

    int i = 0;
    while (result && result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }

    free(result);

    return 0;
}
