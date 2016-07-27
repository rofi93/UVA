#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int r[500],t,i,n,count,mid;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            scanf("%d",&r[i]);
        sort(r,r+n);
        count=0;
        mid=(n-1)/2;
        for(i=0;i<n;i++)
        {
            count+=fabs(r[mid]-r[i]);
        }
        cout<<count<<endl;
    }
    return 0;
}
