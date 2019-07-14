#include <stdio.h>

int main(void) {
	// your code goes here
    int t,n,a[500],d;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        int value=-1;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0; i<n; i++)
        {
            int ta;
            scanf("%d",&d);
            if(i==0)
            {
                ta=a[i+1]+a[n-1];
            }
            else if(i==n-1)
            {
                ta=a[n-2]+a[0];
            }
            else
            {
                ta=a[i-1]+a[i+1];
            }
            if((d-ta>0)&&(d>value))
            {
                value=d;
            }

        }
        printf("%d\n",value);
        t--;
    }

    return 0;

}

