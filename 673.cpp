#include<cstdio>
#include<cstring>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int t,i,n;
    char str[130];
    stack<char>s;
    cin>>t;
    getchar();
    while(t--)
    {
        gets(str);
        n=strlen(str);
        if(n%2!=0)
        {
            printf("No\n");
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(str[i]=='(' || str[i]=='[')
                    s.push(str[i]);
                else if(str[i]==')')
                {
                    if(s.size()==0)
                        s.push(str[i]);
                    else if(s.top()=='(' && s.size()>0)
                        s.pop();
                    else if(s.top()!='(' && s.size()>0)
                        break;
                }
                else if(str[i]==']')
                {
                    if(s.size()==0)
                        s.push(str[i]);
                    else if(s.top()=='[' && s.size()>0)
                        s.pop();
                    else if(s.top()!='[' && s.size()>0)
                        break;
                }
            }
            if(s.empty())
                printf("Yes\n");
            else
                printf("No\n");
        }
        if(!s.empty())
        {
            while(!s.empty())
            {
                s.pop();
            }
        }
    }
    return 0;
}
