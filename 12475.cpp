#include<cstdio>
#include<iostream>
#include<cmath>
#include<iomanip>
#define pi acos(-1)
using namespace std;
int main()
{
    //cout.precision(8);
    long double a,b,P,A,B,p,h;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        A=2*a;
        B=2*b;
        h=((a-b)*(a-b))/((a+b)*(a+b));
        p=sqrt(4-(3*h))+10;
        P=((3*h)/p)+1;
        P=P*(pi*(a+b));
        cout<<"Case "<<i<<": "<<fixed<<setprecision(8)<<P<<endl;
    }
    return 0;
}

