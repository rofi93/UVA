#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<cmath>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;


string rev(string a)
{
    int i,j;
    string b="";
    for(i=0,j=a.length()-1; i<a.length(); i++,j--)
        b+=a[j];
    return b;
}
string add(string a, string b) //not for regular addition
{
    int i,j,x,y,sum,s,temp=0,p,f=0;
    string c="";
    string t="";
    string e,r;
    if(a.length()<b.length())
    {
        e=a;
        a=b;
        b=e;
    }
    for(i=0; i<a.length(); i++)
    {
        if(i<b.length())
        {
            x=a[i]-'0';
            y=b[i]-'0';
            sum=x+y+temp;
            s=sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9) temp=1;
            if(i==a.length()-1 && temp==1)
                c+='1';
        }
        else
        {
            x=a[i]-'0';
            sum=temp+x;
            s=sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9) temp=1;
            if(i==a.length()-1 && temp==1)
                c+='1';
        }
    }
    for(i=0; i<c.length(); i++)
    {
        if(f==0)
        {
            if(c[i]!='0')
            {
                f++;
                t+=c[i];
            }
            else if(i==c.length()-1) t+=c[i];
        }
        else
        {
            t+=c[i];

        }
    }
    return t;
}
int main()
{
    string a,b;
    int x,i;
    while(cin>>x)
    {
        for(i=0; i<x; i++)
        {
            cin>>a>>b;
            cout<<add(a,b)<<endl;
        }
    }
    return 0;
}
