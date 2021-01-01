#include <stdio.h>
#include <string.h>
/*
void* ft_memccpy(void* dst, const void* src, int c, size_t n)
{
	unsigned char* tmp;
	unsigned char* str;
	size_t i;

	tmp = (unsigned char*)dst;
	str = (unsigned char*)src;
	i = 0;

	if (!dst || !src)
		return (0);
	if (dst == src || !n)
		return (0);
	while (i < n)
	{
		tmp[i] = str[i];
		if (str[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}

int		main(void)
 {
	char	src[100] = "test1 test2 testC";
	char	dst[100] = "aaaaaaaaaa";
	char	src_ft[100] = "test1 test2 testC";
	char	dst_ft[100] = "aaaaaaaaaa";
	
	printf("ft_memccpy : %s\nmemccpy : %s\n",
			(char*)ft_memccpy(dst_ft, src_ft, 'C', 17),
			(char*)memccpy(dst, src, 'C', 17));
	printf("dst : %s\nsrc :%s\ndst_ft : %s\nsrc_ft : %s", dst, src,
		dst_ft, src_ft);
	return (0);
}*/


void* ft_memccpy(void* dst, const void* src, int c, size_t n)
{
	size_t			i;
	unsigned char* dst_c;
	unsigned char* src_c;

	src_c = (unsigned char*)src;
	dst_c = (unsigned char*)dst;
	i = 0;
	while (i < n && src_c[i] != (unsigned char)c)
	{
		dst_c[i] = src_c[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		dst_c[i] = src_c[i];
		i++;
		return (&dst_c[i]);
	}
}


char* msg = "This is the string: not copied";

int main(void)
{
	char buffer[80];

	memset(buffer, '\0', 80);
	memccpy(buffer, msg, ':', 80);

	printf("%s\n", buffer);

	return EXIT_SUCCESS;
}