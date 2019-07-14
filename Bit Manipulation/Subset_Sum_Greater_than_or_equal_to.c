//Return number of Subsets with sum greater than or equal to given value

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int no_subset_sum_ge(int set[],int set_size,int value)
{
    int count=0,x,sum,k;
    for(x=0;x<(pow(2,set_size));x++)    //generate every possible number from
    {
        sum=0;
        for(k=0;k<set_size;k++)
        {
            if(x&(1<<k))        //check if kth bit is set
            {
                sum=sum+set[k];
            }

        }
        if(sum>=value)
        {
            count++;
        }
    }
    return count;


}
int main()
{
    int set[5]={3,5,2},n;
    int set_size=3;
    int value=4;
    n=no_subset_sum_ge(set,set_size,value);
    printf("%d",n);
    return 0;
}
