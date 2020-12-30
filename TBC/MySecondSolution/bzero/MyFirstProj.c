#include <stdio.h>

void ft_bzero(void* s, size_t n)
{
	unsigned char* ptr;
	size_t	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = 0;
}

int		main()
{
	char str[30] = "Hello World!";

	ft_bzero(str, 3);
	printf("%s\n", str);
	return 0;
}