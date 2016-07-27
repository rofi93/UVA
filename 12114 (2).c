#include<stdio.h>
int main()
{
    double b,s,x,y;
    long long int i;

    for(i=1;;i++)
    {
        scanf("%lf %lf",&b,&s);
        x=y=0;
        if(b==0 && s==0)
            break;
        if(b==1)
        {
            printf("Case %lld: :-",i);
            printf("\\");
            printf("\n");
            continue;
        }
        if(s>=b)
        {
            printf("Case %lld: :-|\n",i);
            continue;
        }
        if(s*(b-1)>((s-1)*b))
        {
               printf("Case %lld: :-(\n",i);
               continue;
        }
        else
            printf("Case %lld: :-)\n",i);

    }
    return 0;
}
