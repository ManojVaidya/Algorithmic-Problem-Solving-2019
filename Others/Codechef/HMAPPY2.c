#include <stdio.h>
#include <stdlib.h>


int main(void) {
	// your code goes here
	int t,i;
	long long  n,k,j,c;
	long  a,b,a1,b1,c1;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    c=0;
	    c1=0;
	    scanf("%lld%ld%ld%lld",&n,&a,&b,&k);
	    a1=n/a;
	    b1=n/b;
	    if(a%b==0)
	    {
	        c1=a;
	    }
	    else if(b%a==0)
	    {
	        c1=b;
	    }
	    else
	    {
	        c=n/(a*b);
	    }

	    if(c1==0)
	    {
	        c=a1+b1-2*c;
	    }
	    else
	    {
	        c=n/c1;
	        c=a1+b1-2*c;
	    }
	    if(c>=k)
	    {
	        printf("Win\n");
	    }
	    else
	    {
	        printf("Lose\n");
	    }
	}
}



