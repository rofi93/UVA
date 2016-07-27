#include<stdio.h>
int main()
{
    long long int s,d,i;
    while(scanf("%lld %lld",&s,&d)!=EOF)
    {
        for(i=s;;)
        {
            if(i>=d)
                break;
            i+=s+1;
            s++;
        }
        printf("%lld\n",s);
    }
    return 0;
}
