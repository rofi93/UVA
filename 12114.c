#include<stdio.h>
int main()
{
    long long int b,s,i;
    float x,y;

    for(i=1;;i++)
    {
        scanf("%lld %lld",&b,&s);
        x=y=0;
        if(b==0 && s==0)
            break;
        if(b==1)
        {
            printf("Case %lld: :-\\n",i);
        }
        else if(b==s)
        {
            printf("Case %lld: :-|\n",i);
        }
        else if(b>s)
        {
            printf("Case %lld: :-(\n",i);
        }
        else if(s>b)
        {
            printf("Case %lld: :-)\n",i);
        }
    }
    return 0;
}
