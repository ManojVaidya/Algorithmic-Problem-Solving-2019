#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int i,j,len1,len2;
    scanf("%s",str1);
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    int lcs[len1+1][len2+1];
    for(i = 0 ; i < len2; i++)
    {
        lcs[0][i] = 0;
    }

    for(i=0;i<=len1;i++)
    {
        lcs[i][0]=0;
    }


    for(i=1;i<=len1;i++)
    {
        for(j=1;j<=len2;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                lcs[i][j]=1+lcs[i-1][j-1];
            }
            else
            {
                if(lcs[i-1][j]>lcs[i][j-1])
                {
                    lcs[i][j]=lcs[i-1][j];
                }
                else
                {
                    lcs[i][j]=lcs[i][j-1];
                }

            }
        }
    }

    printf("%d",lcs[len1][len2]);

}
