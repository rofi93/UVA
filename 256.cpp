#include<cstdio>
#include<iostream>
#include<cmath>

#define pr1(x)      cout<<x<<"\n"
#define pr2(x,y)    cout<<x<<" "<<y<<"\n"
using namespace std;
int n;
/*bool check(int x)
{
    int a,b,i;
    if(n==2)
    {
        a=x%10;
        b=x/10;
    }
    else if(n==4)
    {
        a=x%100;
        b=x/100;
    }
    else if(n==6)
    {
        a=x%1000;
        b=x/1000;
    }
    else
    {
        a=x%10000;
        b=x/10000;
    }
    if((a+b)*(a+b)==x)
        return true;
    return false;
}*/
void print(int n)
{
    /* with pre-calculation */

    if(n==2)
    {
        printf("%02d\n",0);
        printf("%02d\n",1);
        printf("%02d\n",81);
    }
    else if(n==4)
    {
        printf("%04d\n",0);
        printf("%04d\n",1);
        printf("%04d\n",2025);
        printf("%04d\n",3025);
        printf("%04d\n",9801);
    }
    else if(n==6)
    {
        printf("%06d\n",0);
        printf("%06d\n",1);
        printf("%06d\n",88209);
        printf("%06d\n",494209);
        printf("%06d\n",998001);
    }
    else
    {
        printf("%08d\n",0);
        printf("%08d\n",1);
        printf("%08d\n",4941729);
        printf("%08d\n",7441984);
        printf("%08d\n",24502500);
        printf("%08d\n",25502500);
        printf("%08d\n",52881984);
        printf("%08d\n",60481729);
        printf("%08d\n",99980001);
    }
}
int main()
{
    int i,mid;
    while(cin>>n)
    {
        /*if(n==2)
              mid=99;
          else if(n==4)
              mid=9999;
          else if(n==6)
              mid=999999;
          else
              mid=99999999;
          for(i=0; i<=mid; i++)
          {
              if(check(i))
              {
                  if(n==2)
                  {
                      printf("%02d\n",i);
                  }
                  else if(n==4)
                  {
                      printf("%04d\n",i);
                  }
                  else if(n==6)
                  {
                      printf("%06d\n",i);
                  }
                  else
                  {
                      printf("%08d\n",i);
                  }
              }
          }*/
          print(n);
    }
    return 0;
}
