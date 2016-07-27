#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[10][110];
    int t,c=1,i,max,a[10];
    cin>>t;
    while(t--)
    {
        max=0;
        for(i=0;i<10;i++)
        {
            scanf("%s %d",str[i],&a[i]);
            if(a[i]>max)
                max=a[i];
        }
        printf("Case #%d:\n",c++);
        for(i=0;i<10;i++)
        {
            if(max==a[i])
                printf("%s\n",str[i]);
        }
    }
    return 0;
}
