#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int x,n,i,treat,reason,balance,c=1;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        treat=reason=balance=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x==0)
                treat++;
            else
                reason++;
        }
        balance=reason-treat;
        cout<<"Case "<<c++<<": "<<balance<<endl;
    }
    return 0;
}
