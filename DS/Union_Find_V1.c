#include <stdio.h>
#include <stdlib.h>
int ar[50],n;

int Find(int a,int b)
{
    if(ar[a]==ar[b])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Union(int a,int b)
{
    int temp;
    int j;
    temp=ar[a];
    for(j=0;j<n;j++)
    {
        if(ar[j]==temp)
        {
            ar[j]=ar[b];
        }
    }
}

int main()
{
    int i,status;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ar[i]=i;
    }
    Union(2,1);
    Union(4,3);
    Union(8,4);
    Union(9,3);
    Union(6,5);
    Union(5,2);
    for(i = 0; i < n; i++)
    {
        printf("%d\t", ar[i]);
    }
    status=Find(0,7);
    printf("\n%d",status);
    status = Find(1,6);
    printf("\n%d",status);
    return 0;
}
