#include<stdio.h>
#include<math.h>
int main()
{
    char x,str[10];
    int h1,h2,m1,m2,m3,m4,m5;
    float n1,n2,n3,sum;
    while(scanf("%c",&x))
    {
        if(x=='#')
            break;
        scanf("%s %d %d %d %d",str,&h1,&m1,&h2,&m2);
        if(x=='A')
        {
            n1=0.10;
            n2=0.06;
            n3=0.02;
        }
        else if(x=='B')
        {
            n1=0.25;
            n2=0.15;
            n3=0.05;
        }
        else if(x=='C')
        {
            n1=0.53;
            n2=0.33;
            n3=0.13;
        }
        else if(x=='D')
        {
            n1=0.87;
            n2=0.47;
            n3=0.17;
        }
        else
        {
            n1=1.44;
            n2=0.80;
            n3=0.30;
        }
        sum=m3=m4=m5=0;
        if(h1>=8 && h1<=17)
        {
            if(h2>=8 && h2<=17)
            {
                m3=(h2-h1)*60;
                if(m1>m2)
                    m3+=m1-m2;
                else
                    m3+=m2-m1;
            }
            else
            {
                m3=((18-h1)*60)+(60-m1);
            }
            sum+=m3*n1;
        }
    }
    return 0;
}
