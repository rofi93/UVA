#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[10001],str2[10001];
    int n,i,j,mid,k,a;
    while(gets(str1))
    {
        if(strcmp("DONE",str1)==0)
            break;
        if(strcmp("done",str1)==0)
            break;
        n=strlen(str1);
        j=0;
        for(i=0;i<n;i++)
        {
            if(ispunct(str1[i]) || str1[i]==' ')
                continue;
            str2[j++]=tolower(str1[i]);
        }
        mid=j/2;
        a=0;
        for(i=0,k=j-1;i<=mid,k>=mid;i++,k--)
        {
            if(str2[i]!=str2[k])
            {
                a=1;
                break;
            }
        }
        if(a==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
