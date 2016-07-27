#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    long double n,r;
    while(cin>>n)
    {
        r=pow(2,-n);
        cout<<"2^-"<<n<<" = "<<r<<endl;
    }
    return 0;
}
