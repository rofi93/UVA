#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    char str[51],s[51];
    int n,i,j;
    while(scanf("%s",str)!=EOF)
    {
        if(strcmp("#",str)==0)
            break;
        for(i=0;i<50;i++)
            s[i]='\0';
        n=strlen(str);
        j=0;
        for(i=n-1;i>=0;i--)
        {
            s[j++]=str[i];
        }
        next_permutation(str,str+n);
        if(strcmp(s,str)==0)
            printf("No Successor\n");
        else
            printf("%s\n",str);
    }
    return 0;
}
