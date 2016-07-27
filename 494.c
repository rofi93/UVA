#include<stdio.h>
#include<string.h>
#include<strings.h>
int main()
{
    char ch[10000];
    long int n,i,l;

    while(gets(ch))
    {
        l=strlen(ch);
        n=1;
        for(i=0;i<l;i++)
        {
            if(ch[i]=='.' || ch[i]==',' || ch[i]=='!' || ch[i]=='?' || ch[i]==';' || ch[i]=='"' || ch[i]=='`' || ch[i]=='\'' || ch[i]=='-' || ch[i]==':' || ch[i]=='/' || ch[i]=='\\' || ch[i]=='(' || ch[i]==')')
            {
                if(ch[i-1]==' ')
                {
                    n=n-1;
                }
                else continue;
            }
            if(ch[i]==' ')
            {
                n++;
            }
        }
        printf("%ld\n",n);
    }
    return 0;
}
