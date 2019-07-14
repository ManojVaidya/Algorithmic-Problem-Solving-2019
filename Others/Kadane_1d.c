#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,max=0,tmax=0,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        tmax=tmax+a[i];
        if(tmax<0)
        {
            tmax=0;
        }
        if(tmax>max)
        {
            max=tmax;
        }
    }
    printf("%d",max);
}
