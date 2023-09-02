#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    
    i = 0;
    

    while (i < n)
    {
        if (s1[i] == s2[i])
            i++;
        i++;
    }
    printf("%c\n",s1[i]);
    printf("%c",s2[i]);
    return (s1[i - 1] - s2[i- 1]);
}

#include <stdio.h>
#include <string.h>
int main()
{
    
    printf("fake:    %d\n",ft_strncmp("hhllo","hhrld",7));
    printf("original:    %d",strncmp("hhllo","hhrld",7));
}