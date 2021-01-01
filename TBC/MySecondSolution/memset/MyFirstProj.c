#include <stdio.h>
#include <string.h>

void ft_memcpy(void* dst, const void* src, size_t n)
{
	size_t	i;
	char* dst1;
	char* src1;

	i = 0;
	dst1 = dst;
	src1 = src;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	
	return (dst);
}

int main() {
	char str[] = "memcpy test!";
	char str1[30];
	char str2[30];

	ft_memcpy(str1, str, strlen(str) + 1);
	ft_memcpy(str2, "copy", 5);
	printf("str: %s\nstr1 : %s\nstr2: %s\n", str, str1, str2);
	return 0;
}