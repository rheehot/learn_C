#include <stdio.h>
//#include <ctype.h>

int	ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

void main(void)
{
    char ch;
    printf("한 문자를 입력해 주세요 : ");
    scanf("%c", &ch);
    if (ft_isascii(ch) != 0)
    {
        printf("ascii 문자입니다.\n");
    }
    else
    {
        printf("ascii 문자가 아닙니다.\n");
    }
}