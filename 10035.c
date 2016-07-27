#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int x,y;
    int i,t,a,b,c;

    while(scanf("%llu %llu",&x,&y))
    {
        c=0;
        t=0;
        if(x==0 && y==0)
            break;
        else
        {
            for(i=0;;i++)
            {
                a=(x%10);
                b=(y%10);
                c=(c/10)+a+b;
                if(c>=10)
                    t++;
                x=x/10;
                y=y/10;
                if(x==0 && y==0)
                    break;
            }
            if(t==0)
                printf("No carry operation.\n");
            else if(t==1)
                printf("1 carry operation.\n");
            else if(t>1)
                printf("%d carry operations.\n",t);
        }
    }
    return 0;
}
