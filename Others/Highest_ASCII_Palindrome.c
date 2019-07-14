
#include<stdio.h>
#include<string.h>

void guess_what(char str[])
{
    char result[100],maxc=str[0];
    int i,j=0;
    for(i=1;i<strlen(str);i++)
    {
        if(str[i]>maxc)
            maxc=str[i];
    }
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==maxc)
        {
            result[j]=str[i];
            j++;
        }
    }
    result[j]='\0';
    printf("\nThe palindrome with highest ascii value is: %s",result);
}

int main()
{
    char str[100];
    scanf("%s",str);
    guess_what(str);
    return 0;
}