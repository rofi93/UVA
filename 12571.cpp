#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t,n,q,i,j,max,max_0,max_1,max_2,max_3,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&q);
        max=max_0=max_1=max_2=max_3=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x%4==0 && x>max_0)
                max_0=x;
            if(x%4==1 && x>max_1)
                max_1=x;
            if(x%4==2 && x>max_2)
                max_2=x;
            if(x%4==3 && x>max_3)
                max_3=x;
        }
        for(i=0;i<q;i++)
        {
            max=0;
            scanf("%d",&x);
            if((x&max_0)>max)
                max=x&max_0;
            if((x&max_1)>max)
                max=x&max_1;
            if((x&max_2)>max)
                max=x&max_2;
            if((x&max_3)>max)
                max=x&max_3;
            printf("%d\n",max);
        }
    }
    return 0;
}
