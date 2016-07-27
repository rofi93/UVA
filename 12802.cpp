#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
bool prime(long long int n)
{
    int i=2;
    if(n==1 || n==2 || n==3 || n==5 || n==7)
        return true;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
bool palindrome(long long int n)
{
    int i=n,rev=0;
    while(n)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    if(i==rev)
    {
        if(prime(i))
            return true;
        else
            return false;
    }

    return false;
}
int main()
{
    long long int n;
    bool res;
    while(cin>>n)
    {
        res=false;
        res=palindrome(n);
        cout<<2*n<<endl;
        if(res)
            break;
    }
    return 0;
}
