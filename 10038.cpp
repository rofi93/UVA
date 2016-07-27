#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long int n,i,j,a[3010],b[3010],x,x2,y,x1,y1;

    while(scanf("%ld",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            b[i]=abs(a[i+1]-a[i]);
        }
        sort(b,b+i);
        y=0;
        for(i=0;i<n-1;i++)
        {
            if(b[i]==b[i+1])
                {
                    y++;
                    break;
                }
        }
        if(y==0)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
    return 0;
}

