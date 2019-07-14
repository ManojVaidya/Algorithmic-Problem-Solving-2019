#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int assign(int cost[3][3],int n)
{
    int set_size=pow(2,n);
    int dp_arr[set_size];
    int i,x,j,mask;

    dp_arr[0]=0;
    for(i=1;i<set_size;i++)
    {
        dp_arr[i]=INT_MAX;
    }

    for(mask=0;mask<set_size;mask++)
    {
        x=count_no_set_bits(mask);
        for(j=0;j<n;j++)
        {
            if((mask&(1<<j))==0)
            {
                if((dp_arr[(mask|(1<<j))])>(dp_arr[mask]+cost[x][j]))
                {
                    dp_arr[mask|(1<<j)]=dp_arr[mask]+cost[x][j];
                }
            }
        }
    }
    return dp_arr[set_size-1];
}

int count_no_set_bits(int a)
{
    int sum=0;
    while(a)
    {
        sum+=1;
        a=a&(a-1);
    }
    //printf("%d ",sum);
    return sum;

}

int main()
{
    int cost[3][3]={{8,2,5},{3,2,7},{4,1,2}};
    int k;
   /* for(k=0;k<3;k++)
    {
        printf("%d %d %d\n",cost[k][0],cost[k][1],cost[k][2]);
    }*/
    int y;
    y=assign(cost,3);
    printf("%d",y);
    return 0;
}
