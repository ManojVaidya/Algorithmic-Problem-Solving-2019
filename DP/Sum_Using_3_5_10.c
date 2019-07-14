#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,i;
    scanf("%d",&s);
    int a[s+1];
    memset(a,0,sizeof(int) * (s+1));
    a[0]=1;
    for(i=3;i<=s;i++)
    {
        a[i]=a[i]+a[i-3];
    }
    for(i=5;i<=s;i++)
    {
        a[i]=a[i]+a[i-5];
    }
    for(i=10;i<=s;i++)
    {
        a[i]=a[i]+a[i-10];
    }
    printf("%d",a[s]);

}
