#include<cstdio>
#include<iostream>
#include<cmath>
#define MAX 100003
using namespace std;
int x[MAX];
int s[MAX],y[MAX];
void sieve(void)
{
    int i,j;
    x[0]=x[1]=1;
    for(i=4;i<MAX;i+=2)
        x[i]=1;
    for(i=3;i<=sqrt(MAX);i+=2)
    {
        if(x[i]==0)
        {
            for(j=i*i;j<MAX;j+=i)
            {
                x[j]=1;
            }
        }
    }
    j=1;
    y[0]=2;
    for(i=3;i<MAX;i+=2)
    {
        if(x[i]==0)
            y[j++]=i;
    }
}
void sign(void)
{
    int m,i;
    s[2]=1;
    for(i=1;i<=25000;i++)
    {
        m=4*i-1;
        if(x[m]==0)
            s[m]=1;
        m=4*i+1;
        if(x[m]==0)
            s[m]=-1;
    }
}
int main()
{
    sieve();
    sign();
    int n,t,i,sum,z;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        if(x[n]==0)
        {
            if(s[n]==1)
                cout<<"+\n";
            else if(s[n]==-1)
                cout<<"-\n";
        }
        else if(x[n]==1)
        {
            i=0;
            sum=1;
            while(y[i]<=sqrt(n))
            {
                if(n%y[i]==0)
                {
                    z=y[i];
                    sum=sum*s[z];
                    n=n/y[i];
                }
                else
                    i++;

                if(n==1)
                    break;
            }
            if(n>1)
            {
                z=n;
                sum=sum*s[z];
            }
            if(sum==1)
                cout<<"+\n";
            else if(sum==-1)
                cout<<"-\n";
        }
    }
    return 0;
}
