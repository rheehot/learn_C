#include <stdio.h>

size_t  ft_strlen(const char* s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
 
void main()
{
    char str1[20] = "Hello";
    char str2[30] = "Worl\0d!!";
    
    printf("str1 len : %d\n", ft_strlen(str1));
    printf("str2 len : %d\n", ft_strlen(str2));

    return (0);
}
