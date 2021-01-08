#include <stdio.h>


char* ft_strnstr(const char* big, const char* little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char*) big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char*)&big[i]);
		}
		i++;
	}
	return (0);
}

int main()
{
	char s1[30] = "pen pineapple apple pen!";

	char* ptr = ft_strnstr(s1, "pine", 10);
	printf("%s\n", ptr);
	char* ptr1 = ft_strnstr(s1, "pine", 5);
	printf("%s\n", ptr1);

	return (0);
}