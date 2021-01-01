/*#include <stdio.h>
#include <string.h>


void	ft_memcpy(void* dest, const void* src, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
}

int main() {
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];

	memcpy(str2, str1, strlen(str1) + 1);
	memcpy(str3, "copy successful", 16);
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
void* ft_memset(void* s, int c, size_t n)
{
	//size_t
	//`unsigned int`를 size_t라는 이름으로 정의해 놓은 것.
	// typedef `unsigned int` `size_t`;
	char* ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n)
		ptr[i++] = c;
	return (s);
}
	//malloc, free 함수가 선언된 헤더 파일
//#include <string.h>	//memset 함수가 선언된 헤더파일

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100] = "Hello World!";
	printf("%s\n", str);
	printf("%s\n", ft_memset(str, 'a', 5));
	printf("%s\n", str);
	memcpy
}