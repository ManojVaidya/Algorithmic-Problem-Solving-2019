#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int t,n,i,sump,sumn,p,np,a;
   scanf("%lld",&t);
   while(t--){
        sump=0,sumn=0,p=0,np=0,a=0;
   scanf("%lld",&n);

   for(i=0;i<n;i++)
   {

       scanf("%lld",&a);
   if(a>0)
   {
       sump+=a;
       p++;
   }
   else
   {

       sumn+=a;
       np++;
   }
   }
   if(p==n||np==n)
   {

       printf("%lld %lld\n",n,n);
   }
   else
   {

       if(p>np)
       {

           printf("%lld %lld\n",p,np);
       }
       else
       {
           printf("%lld %lld\n",np,p);
       }
       }
   }

   }

