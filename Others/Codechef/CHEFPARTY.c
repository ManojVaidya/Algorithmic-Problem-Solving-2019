#include <stdio.h>
void fun(long int n);
void quicksort(int arr[], int l, int r);
int main(void)
{
    long int i,t,n;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        fun(n);
    }
    return 0;
}

void fun(long int n)
{
    long a[n],i1,j,temp,c=0;
    for(i1=0;i1<n;i1++)
    {
        scanf("%ld",&a[i1]);
    }
    quicksort(a, 0, n-1);
    for(i1=0;i1<n;i1++)
    {
        printf("%ld %ld\t",a[i1],c);
        if(a[i1]<=c)
        {
            c++;
        }
    }
    printf("%ld\n",c);

}

void quicksort(int arr[], int l, int r)
{
    int t;

    if (l >= r)
    {
        return;
    }


    int pivot = arr[r];

int cnt = l;

    for (int i2 = l; i2 <= r; i2++)
    {

        if (arr[i2] <= pivot)
        {

            t=arr[i2];
            arr[i2]=arr[cnt];
            arr[cnt]=t;
            cnt++;
        }
    }

    quicksort(arr, l, cnt-2);
    quicksort(arr, cnt, r);
}

