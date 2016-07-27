#include<stdio.h>
#include<string.h>
int main()
{
    char s1[35],s2[35],s[35];
    int n,m,i,t,j;

    while(scanf("%s %s",s1,s2))
    {
    n=strlen(s1);
    for(i=0;i<n;i++)
    {
        s[i]=(s1[i]-s2[i])+48;
    }
    printf("%s\n",s);
    }

    return 0;
}
