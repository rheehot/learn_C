#include <stdio.h>
#include <limits.h>    // �ڷ����� �ִ񰪰� �ּڰ��� ���ǵ� ��� ����

int main()
{
    char num1 = CHAR_MIN;          // char�� �ּڰ�
	char num1m = CHAR_MAX;   
    short num2 = SHRT_MIN;         // short�� �ּڰ�
    int num3 = INT_MIN;				// int�� �ּڰ�
	int num3m = INT_MAX;            
    long num4 = LONG_MIN;          // long�� �ּڰ�
    long long num5 = LLONG_MIN;    // long long�� �ּڰ�

    // char, short, int�� %d�� ����ϰ� long�� %ld�� ���, long long�� %lld�� ���
    printf("%d %d %d %d %d %ld %lld\n", num1, num2, num3m, num1m,num3, num4, num5);
    // -128 -32768 -2147483648 -2147483648 -9223372036854775808

    return 0;
}
