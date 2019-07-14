#include <stdio.h>
#include <stdlib.h>

void dfs(int a[6][6],int source);

int a[6][6]={
    {0,1,1,1,0,0},
    {1,0,1,0,0,0},
    {1,1,0,0,0,0},
    {1,0,0,0,0,0},
    {0,0,0,0,0,1},
    {0,0,0,0,1,0}
    };
int source=0;
int v=6;
int visited[6];
int c=0;
int pp[6][2]={0};
int max=0;

int main()
{
    int i;

    for(i=0;i<v;i++)
    {
        visited[i]=0;
    }

    c++;
    pp[source][0]=c;

    dfs(a,source);
        c++;
     pp[source][1]=c;
    while(max<v)
    {
        source=max+1;
        c++;
        pp[source][0]=c;

        dfs(a,source);
        c++;
        pp[source][1]=c;
    }


    for(i=0;i<6;i++)
    {
        printf("\n%d %d\n",pp[i][0],pp[i][1]);
    }
    return 0;
}


void dfs(int a[6][6],int source)
{
    int i;
    visited[source]=1;
    if(source>max)
    {
        max=source;
    }
    for(i=0;i<v;i++)
    {
        if(a[source][i]==1 && visited[i]==0)
        {
            c++;
            pp[i][0]=c;
            dfs(a,i);
            if(pp[i][1]==0)
            {
                c++;
                pp[i][1]=c;
            }
        }


    }



}
