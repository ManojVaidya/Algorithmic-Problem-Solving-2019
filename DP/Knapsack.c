#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int w[n],v[n],W;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&w[i],&v[i]);
    }
    scanf("%d",&W);
    int k[n+1][W+1];
    for(i=0;i<=n;i++)
    {
       for(j=0;j<=W;j++)
       {
            if (i==0||j==0)
            {
                k[i][j] = 0;
            }
            else if (j-w[i-1] <0)
            {
                k[i][j] = k[i-1][j];
            }
           else
           {

                if(k[i-1][j]>(k[i-1][j-w[i-1]]+v[i-1]))
                {
                    k[i][j]=k[i-1][j];
                }
                else
                {
                    k[i][j]=k[i-1][j-w[i-1]]+v[i-1];
                }

           }
       }
    }
    printf("%d",k[n][W]);
    return 0;
}
