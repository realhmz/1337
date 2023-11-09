#include "libft.h"

void    skip_charset(char *str, char *charset, int *i)
{
    while (str[*i] == charset[0])
        *i = *i + 1;
}

int    word_count(char *str, char *charset)
{
    int i = 0;
    int count = 0;

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

char    **ft_split(char const *str, char c)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int count = word_count((char *)str, &c);
    char **ret;

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
            //printf("k = %d\n", k);
        }
    }
    //puts("here");
    ret[k] = 0;
    return (ret);
}
