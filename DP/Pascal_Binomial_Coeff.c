#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k,j;
    scanf("%d",&n);
    scanf("%d",&k);
    int p[n+1][k+1];

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i&&j<=k;j++)
        {
            if(j==0||j==i)
            {
                p[i][j]=1;
            }
            else
            {
                p[i][j]=p[i-1][j-1]+p[i-1][j];
            }

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i && j<=k;j++)
        {
            printf("%d \t",p[i][j]);
        }
        printf("\n");
    }



}
