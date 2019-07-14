#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {

        int n;
        int alp[30];
        int check[30];
        for(int i=0; i<30; i++)
        {
            alp[i]=0;
        }
        scanf("%d",&n);
        int temp=n;
        while(temp>0)
        {

            for(int i=0; i<30; i++)
            {
                check[i]=0;
            }
            char s[500];
            scanf("%s",s);

            for(int i=0; i<strlen(s); i++)
            {
                char c=s[i];

                if(check[c-97]==1)
                    continue;
                alp[c-97]++;
                check[c-97]=1;

            }

        temp--;
        }
        int cnt=0;
        for(int i=0; i<30; i++)
        {
            if(alp[i]==n)
                cnt++;

        }
        printf("%d\n",cnt);
        t--;
    }
    return 0;
}
