#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j,max=0;
    scanf("%d",&n);
    int a[n],lis[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        lis[i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if((a[j]<a[i])&&(lis[i]<(lis[j]+1)))
            {
                lis[i]=lis[j]+1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(lis[i]>max)
        {
            max = lis[i];
        }
    }
    printf("%d",max);
    return 0;
}
