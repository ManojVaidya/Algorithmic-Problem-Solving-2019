#include<stdio.h>
int arr[50],n;


int root(int i)
{
    while(arr[i]!=i)
    {
        i=arr[i];
    }
    return i;
}

int Find(int a, int b)
{
    if(root(a)==root(b))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Union(int a ,int b)
{
    int root_a;
    int root_b;
    root_a=root(a);
    root_b=root(b);
    arr[root_a]=root_b;
}

int main()
{
    int i,status;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i]=i;
    }
    Union(1,0);
    Union(0,2);
    Union(3,4);
    Union(1,4);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    status=Find(1,4);
    printf("\n%d", status);
    status = Find(3,5);
    printf("\n%d", status);
    return 0;
}
