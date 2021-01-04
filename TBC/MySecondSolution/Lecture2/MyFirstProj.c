﻿#include <stdio.h>

int	ft_memcmp(const void* s1, const void* s2, size_t n)
{
	unsigned char* a1;
	unsigned char* a2;
	size_t i;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a1[i] != a2[i])
			return (a1[i] - a2[i]);
		i++;
	}
	return (0);
}

int main(void)
{
	char s1[] = "42cadet";
	char s2[] = "42cadetabc";
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("%d\n", ft_memcmp(s1, s2, 8));

	return (0);
}