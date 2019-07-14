
#include<stdio.h>

void find(int n,int k)
{
    int sum=k,a[k],i;
    for(i=0;i<k;i++)
        a[i]=1;

    for(i=k-1;i>=0;i--)
    {
        while(sum+a[i]<=n)
        {
            sum=sum+a[i];
            a[i]=a[i]*2;
        }
    }
    if(sum!=n)
        printf("No Solution");
    else
    {
        for(i=0;i<k;i++)
            printf("%d ",a[i]);
    }
}


int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    find(n,k);
    return 0;
}