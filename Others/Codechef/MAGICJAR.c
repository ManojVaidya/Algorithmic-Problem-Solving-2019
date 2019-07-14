#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;

	long long int max;
	scanf("%d",&t);
	while(t>0)
	{
	    max=0;
		scanf("%d",&n);
		long int a[n];
		for(int i=0; i<n; i++)
		{
			scanf("%ld",&a[i]);
		}
		for(int i=0; i<n; i++)
		{
		    max=max+a[i];
		}
		printf("%lld\n",(max-(n)+1));
        t--;
	}

	return 0;
}


