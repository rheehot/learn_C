// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string.h>


void rot_13(char* str)
{
	int i = 0;
	char temp = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && str[i] <= 90))
		{
			temp = str[i] - 13;
			if (65 <= temp && temp <= 90)
			{
				str[i] -= 13;
			}
			else
			{
				str[i] += 13;
			}
		}
		else if (97 <= str[i] && str[i] <= 122)
		{
			temp = str[i] - 13;
			if  (97 <= temp && temp <= 122)
			{
				str[i] -= 13;
			}
			else
			{
				str[i] += 13;
			}
		}
		i++;
	}

}
int ft_is_prime(int nb)
{
	int i = 2;
	if (nb <= 1) return 0;
	while (i <= nb / 2)
	{
		if (nb % i == 0) return 0;
		i++;
	}
	return 1;
}
int ft_find_next_prime(int nb)
{
	int k = nb;
	int i = 2;
	if (nb <= 1) return 2;
	while (1)
	{
		i = 2;
		while (i <= k / 2)
		{
			if (k % i == 0) break;
			i++;
		}
		if (i >= k / 2) return k;
		k++;
	}
}
int ft_sqrt(int nb)
{
	int i = 1;

	while (i * i <= nb)
	{
		if (i * i == nb) return i;
		i++;
	}
	return 0;
}
int ft_fibonacci(int index)
{
	if (index == 0) return 0;
	if (index == 1) return 1;
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}
int ft_recursive_power(int nb, int power)
{
	if (nb == 0) return 1;
	if (power == 0)return 1;
	return nb * ft_recursive_power(nb, power - 1);
}
int ft_iterative_power(int nb, int power)
{
	int result = 1;
	if (nb == 0) return 1;
	while (power > 0)
	{
		result*= nb;
		power--;
	}
	return result;
}
int ft_iterative_factorial(int nb)
{
	int result = 1;
	if (nb <= 0)return 0;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return result;
}
int ft_recursive_factorial(int nb)
{
	if (nb == 1) return 1;
	return nb * ft_recursive_factorial(nb - 1);
}
int ft_atoi(char* str)
{
	int i = 0;
	int k = 1;
	int idx = 0;
	int j = 0;
	int result = 0;
	int flag = 0;
	int str_address = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57) // 숫자
		{
			if (flag == 0) str_address = i;
			else k *= 10;
			flag = 1; //최초 발견		
		}
		
		else 
		{
			if ( str[i]==45)idx++;
			if (flag == 1) break;
		}
		i++;
	}

	while (k>0)
	{
		result += k * (str[str_address + j]-48);
		k/=10;
		j++;
	}
	if ( idx%2==0) return result;
	else return result*-1;
}
char* ft_strupcase(char* str) 
{

	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = str[i] - 32;
		i++;
	}
	return str;
}
int ft_str_is_numeric(char* str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (48 <= str[i] && 57 >= str[i])
			return 1;
		i++;
	}
	return 0;
}
int ft_str_is_alpha(char* str)
{
	int i=0;
	
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && 90 >= str[i]) || (97 <= str[i] && 122 >= str[i]))
			return 1;
		i++;
	}
	return 0;
}

char* ft_strncpy(char* dest, char* src, unsigned int n)
{
	int i = 0;
	while (i<n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
char* ft_strcpy(char* dest, char* src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void ft_rev_int_tab(int * tab, int size)
{
	int i = 0;;
	int div;

	while (i<size/2)
	{
		swap(&tab[i], &tab[size - i - 1]);
		i++;
	}

	/*for (i = 0; i < size / 2; i++)
	{
		swap(&tab[i], &tab[size - i-1]);
	}*/
}
int ft_strlen(char* str)
{
	int num = 0;

	while (str[num]!='\0')
	{
		num++;
	}
	return num;
}

void ft_ultimate_div_mod(int* a, int* b)
{
	int c, d;
	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
void  ft_div_mod(int a, int  b, int* div, int* mod)
{
	*div = a / b;
	*mod = a % b;
}
void ft_swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}


void ft_sort_int_tab(int* tab, int size)
{
	int i = 0;
	int j = 0;
	
	while (i < size-1)
	{
		j = i+1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}

}

unsigned int ft_strlcpy(char* dest, char* src, unsigned int size)
{
	int i = 0;
	while (i < size - 1)
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return i;
}

void ft_putstr_non_printable(char* str)
{
	//0~32 or 127

	int i=0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			printf("\\");
			printf("%x", str[i] / 0x10);
			printf("%x", str[i] % 0x10);
		}
		else printf("%c", str[i]);
		i++;
	}
}

int ft_strcmp(char* s1, char* s2)
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '0')
	{
		if (s1[i] > s2[i])		return 1;
		else if (s2[i] > s1[i]) return -1;
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0') return 0;
	else if(s1[i]=='\0') return -1;
	else  return 1;
	return 0;
}

int ft_strncmp(char* s1, char* s2,int size)
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '0' && i<size)
	{
		if (s1[i] > s2[i])		return 1;
		else if (s2[i] > s1[i]) return -1;
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0') return 0;
	else if (s1[i] == '\0') return -1;
	else if (s2[i] == '\0') return 1;
	
	return 0;
}

char* ft_strcat(char* dest, char* src)
{
	int i=0;
	int j=0;
	while (dest[j] != '\0')
		j++;
	
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return dest;
}

char* ft_strncat(char* dest, char* src, unsigned int nb)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
		j++;

	while (src[i] != '\0'&& i<nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return dest;
}
unsigned int ft_strlcat(char* dest, char* src, unsigned int size)
{

	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;

	while (dest[k] != '\0')
		k++;
	while (src[m] != '\0')
		m++;

	j = k;
	while (src[i] != '\0' && i < size-1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (size < k) return m + size;
	else if (size > k)	return m + k;
	
	return j;
	

}
char* ft_strstr(char* str, char* to_find)
{
	int i = 0;
	int j = 0;
	int k = 0;


	while (str[i] != '\0')
	{
		j = 0;
		k = i;

		while (str[k]!='\0' && to_find[j] != '\0')
		{
			if (str[k] != to_find[j])
				break;
			
			k++;
			j++;
		}
		if (to_find[j]=='\0') return &str[i]; // 모두 같음
	
		i++;
	}

	return NULL;
}
void ft_putstr(char* str)
{
	int i = 0;
	while(str[i]!='\0')
		printf("%c", str[i++]); // write(1,&str[i],1);
}
int main()
{

	//char carr[5] = { 'a','b','c','d','e','\n' };
	//printf("%c %c\n", carr[0],*(carr+1));
	//char carr[10] = "ABC";
	//ft_putstr(carr); // &carr[0]
	//printf("%d\n", ft_strlen(carr));
	//ft_putstr(carr); // &carr[0]

	//ft_div_mod(4, 2, &div, &mod);
	//printf("%d %d \n", div, mod);
	//ft_swap(&a, &b);
	//ft_ultimate_div_mod(&num, &num2);
	//printf("%d %d\n", num, num2);
	/*int i;
	int carr[5] = { 1,2,3,4,5 };
	ft_rev_int_tab(carr, (sizeof(carr)) / (sizeof(int)));

	for (i = 0; i < (sizeof(carr))/(sizeof(int)); i++)
		printf("%d\n", carr[i]);*/
	//printf("%d %d", a, b);
	//char* carr = (char*)"ascsc";
	//char carr2[100]="ascsc";;
	//char* temp = ft_strupcase(carr2);
	//ft_strcpy(carr2, carr);
	//ft_strncpy(carr2, carr, 3);
	//printf("%d\n", ft_strupcase(carr));
	//int i;
	//char arr[7] = "123456";
	//char dest[3];
	//ft_strlcpy(dest, arr, 9); 
	//printf("%s\n", dest);
	char arr[30] = "     --avss12323davd1232";
	char arr2[30] = "My horse is Amazing.";
	int i = 0;
	/*while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}*/
	
	//rot_13(argv[1]);
	printf("%s\n", argv[1]);
	//ft_putstr(arr2);
	//printf("%d\n%s\n", ft_strlcat(arr, arr2, 2), arr);
	//ft_putstr_non_printable(arr);
	//printf("%2x", '\n');
	//ft_sort_int_tab(arr, 6);
	//for (i = 0; i < 6; i++)
	//	printf("%d\n", arr[i]);
	//printf("%s", temp);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
