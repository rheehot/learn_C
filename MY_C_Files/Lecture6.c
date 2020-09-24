#include <stdio.h>

void solve(int * n, int len)
{
    
}

int main(void)
{
    int len;
    int n[20];
    int i;
    scanf("%d", &len);
    
    for(i = 0; i < len; i++)
    {
        scanf("%d", n + i);
    }
    
    solve(n, len);
    
    return 0;
}