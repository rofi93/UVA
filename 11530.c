#include<stdio.h>
#include<string.h>
#include<strings.h>
int main()
{
    int t,n,i,j,l;
    char str[150],T[10];

    gets(T);
    t=atoi(T);
    for(i=1;i<=t;i++)
    {
        gets(str);
        l=strlen(str);
        n=0;
        for(j=0;j<l;j++)
        {
            if(str[j]=='a' || str[j]=='d' || str[j]=='g' || str[j]=='j' || str[j]=='m' || str[j]=='p' || str[j]=='t' || str[j]=='w' || str[j]==' ')
            {
                n=n+1;
            }
            else if(str[j]=='b' || str[j]=='e' || str[j]=='h' || str[j]=='k' || str[j]=='n' || str[j]=='q' || str[j]=='u' || str[j]=='x')
            {
                n=n+2;
            }
            else if(str[j]=='c' || str[j]=='f' || str[j]=='i' || str[j]=='l' || str[j]=='o' || str[j]=='r' || str[j]=='v' || str[j]=='y')
            {
                n=n+3;
            }
            else if(str[j]=='s' || str[j]=='z')
            {
                n=n+4;
            }
        }
        printf("Case #%d: %d\n",i,n);
    }
    return 0;
}
