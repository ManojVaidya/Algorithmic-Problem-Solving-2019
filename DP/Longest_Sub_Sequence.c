#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    int i, j;
    char p[5] = "lmnop";
    char s[7] = "lmmnoop";
    int t[strlen(p)][strlen(s)];
    for(i = 0 ; i <strlen(s); i++)
    {
        t[0][i] = 0;
    }
    for(i = 0; i <= strlen(p); i++)
    {
        t[i][0]=0;
    }

    for(i = 1; i <= strlen(p); i++)
    {
        for(j = 1; j <= strlen(s); j++)
        {
            if(p[i-1] == s[j-1])
            {
                t[i][j] = 1 + t[i-1][j-1];
            }
            else
            {
                if(t[i-1][j]>t[i][j-1])
                {
                    t[i][j] = t[i-1][j];
                }
                else
                {
                    t[i][j]=t[i][j-1];
                }
            }
        }
    }

    printf("%d\n", t[strlen(p)][strlen(s)]);

    return 0;
}

