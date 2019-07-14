#include <stdio.h>

int main(void) {
	// your code goes here
	long long int t,i,j;
	scanf("%lld",&t);
	long long int n,k,v,s;
	long double a,lol;

	for(i=0;i<t;i++)
	{
	    a=0;
	    s=0;
	    scanf("%lld %lld %lld",&n,&k,&v);
	    for(j=0;j<n;j++)
	    {
	       scanf("%Lf",&lol);
	       s=s+lol;
	    }
	    a=s/n;
	    if(a==v)
	    {
	        printf("%lld\n",v);
	    }
	    else
	    {
	        printf("-1\n");
	    }
	}
	return 0;
}

