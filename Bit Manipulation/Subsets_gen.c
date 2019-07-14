#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n];
    int size=pow(2,n);
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        scanf("%c",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                printf("%c ",a[j]);
            }
        }
        printf("\n");
    }
}
