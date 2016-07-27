#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char str[50];
    long long int i,n,a[50],b,l,m,p;

    while(scanf("%s",str))
    {
        if(str[0]==48)
            break;
        l=strlen(str);
        m=b=l;
        n=0;
        for(i=0;i<m;i++)
        {
            a[i]=str[i]-48;
            p=pow(2,l)-1;
            n+=a[i]*p;
            l--;
        }
        printf("%lld\n",n);
    }
    return 0;
}
