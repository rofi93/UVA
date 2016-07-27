#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int t,a,b,c,d,i,j,x;

    while(scanf("%llu",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            scanf("%llu %llu %llu %llu",&a,&b,&c,&d);
            if(a>0 && b>0 && c>0 && d>0)
            {
            if(a==b && b==c && c==d && d==a)
                printf("square\n");
            else if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
                printf("rectangle\n");
            else
            {
                if(a>=b && a>=c && a>=d)
                {
                    if((b+c+d)>a)
                        printf("quadrangle\n");
                    else if((b+c+d)<=a)
                        printf("banana\n");
                }
                else if(b>=a && b>=c && b>=d)
                {
                    if((a+c+d)>b)
                        printf("quadrangle\n");
                    else if((a+c+d)<=b)
                        printf("banana\n");
                }
                else if(c>=a && c>=b && c>=d)
                {
                    if((a+b+d)>c)
                        printf("quadrangle\n");
                    else if((a+b+d)<=c)
                        printf("banana\n");
                }
                else if(d>=a && d>=b && d>=c)
                {
                    if((a+b+c)>d)
                        printf("quadrangle\n");
                    else if((a+b+c)<=d)
                        printf("banana\n");
                }
            }
        }
        }
    }
    return 0;
}
