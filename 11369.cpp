#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long int v[20001];
    long int n,i,sum,t,x;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld",&v[i]);
        }
        sort(v,v+n);
        sum=0;
        for(i=n-3;i>=0;i=i-3)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
