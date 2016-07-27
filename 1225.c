#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,x,y,z,l,t,n,r,p;

    scanf("%d",&t);
    for(x=0;x<t;x++)
    {
        scanf("%d",&n);
        a=b=c=d=e=f=g=h=i=j=0;
        for(y=1;y<=n;y++)
        {
                p=y;
                for(l=1;;l++)
                {
                    z=p%10;
                    p=p/10;
                    if(z==0)
                    {
                        a++;
                    }
                    else if(z==1)
                    {
                        b++;
                    }
                    else if(z==2)
                    {
                        c++;
                    }
                    else if(z==3)
                    {
                        d++;
                    }
                    else if(z==4)
                    {
                        e++;
                    }
                    else if(z==5)
                    {
                        f++;
                    }
                    else if(z==6)
                    {
                        g++;
                    }
                    else if(z==7)
                    {
                        h++;
                    }
                    else if(z==8)
                    {
                        i++;
                    }
                    else if(z==9)
                    {
                        j++;
                    }
                    if(p==0)
                        break;
                }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j);
    }
    return 0;
}
