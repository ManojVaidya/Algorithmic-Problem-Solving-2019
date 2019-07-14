#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,fib[500];
    scanf("%d",&n);
    fib[0] = 0;
    fib[1] = 1;
    for(i=2;i<=n;i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    for(i=0;i<=n;i++)
    {
        printf("%d\t",fib[i]);
    }
    return 0;
}
