#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int r,n,res,c=1;
    while(cin>>r>>n)
    {
        if(r==0 && n==0)
            break;
        res=r/n;
        if(r<=n)
            res=0;
        if(r%n==0)
            res--;
        if(res>26)
            cout<<"Case "<<c++<<": impossible"<<endl;
        else
            cout<<"Case "<<c++<<": "<<res<<endl;
    }
    return 0;
}
