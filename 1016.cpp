#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,a[100000],b[100000],i,j,val,c=1,temp;
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            b[i]=a[i];
        }
        sort(b,b+i);
        val=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                val+=a[i];
            }
        }
        printf("Case %lld: %lld\n",c++,val);
    }
    return 0;
}
