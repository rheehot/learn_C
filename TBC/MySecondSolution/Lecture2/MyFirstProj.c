#include <stdio.h>

/*
int	ft_strncmp(const char* s1, const char* s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	if (s1[i] == s2[i])
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}*/

int					ft_strncmp(const char* s1, const char* s2, size_t n)
{
	unsigned char* p1;
	unsigned char* p2;
	size_t			i;

	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	i = 0;
	while (n--)
	{
		if (p1[i] != p2[i] || p1[i] == 0 || p2[i] == 0)
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

int main()
{
    char s1[10] = "aaa";
    char s2[10] = "aab";

    int compare1 = ft_strncmp(s1, s2, 2);
    int compare2 = ft_strncmp(s2, s1, 4);
    int compare3 = ft_strncmp(s1, s2, 4);
    int compare4 = ft_strncmp(s1, s2, 0);

    printf("결과1 : %d\n", compare1);
    printf("결과2 : %d\n", compare2);
    printf("결과3 : %d\n", compare3);
    printf("결과4 : %d\n", compare4);

    return 0;
}