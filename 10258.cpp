#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct contest
{
    int cont;
    int problem[10];
    int solve;
    int penalty;
    int total[10];
    int res[10];
    int submit;
    bool S[10];
};
bool operator<(struct contest A, struct contest B)
{
    if(A.solve<B.solve)
        return true;
    else if(A.solve==B.solve)
    {
        if(B.penalty<A.penalty)
            return true;
        else if(A.penalty==B.penalty)
        {
            if(A.cont<B.cont)
                return false;
            return true;
        }
        return false;
    }
    return false;
}
void Swap(struct contest *A, struct contest *B)
{
    struct contest temp;
    temp=*A;
    *A=*B;
    *B=temp;
}
int main()
{
    struct contest part[101];
    int i,t,j,k,x,submission,n,res,count;
    bool NL=false;
    char verdict;
    char line[1024];
    gets(line);
	sscanf(line, "%d", &n);
	gets(line);
    while(n--)
    {
        for(i=0; i<101; i++)
        {
            for(j=0; j<10; j++)
            {
                part[i].problem[j]=part[i].total[j]=part[i].res[j]=0;
                part[i].S[j]=true;
            }

            part[i].solve=part[i].submit=0;
            part[i].penalty=-1;
        }
        while(gets(line) && strlen(line))
        {
            sscanf(line,"%d %d %d %c",&i,&x,&submission,&verdict);
            part[i].submit=1;
            if(part[i].S[x]==false)
                continue;
            if(verdict=='I' && part[i].S[x]==true)
            {
                part[i].problem[x]++;
            }
            else if(verdict=='C' && part[i].S[x]==true)
            {
                part[i].S[x]=false;
                part[i].res[x]=1;
                part[i].solve++;
            }
            if(verdict!='C' && part[i].S[x]==true)
            {
                submission=0;
            }
            part[i].total[x]=(part[i].problem[x]*20*part[i].res[x])+submission;
        }
        count=0;
        for(i=0; i<101; i++)
        {
            if(part[i].submit==1)
            {
                part[i].penalty=0;
                count++;
                for(j=0; j<10; j++)
                {
                    part[i].penalty+=part[i].total[j];
                }
            }

            part[i].cont=i;
        }
        if(count>1)
        {
            for(i=0;i<101;i++)
            {
                for(j=i+1;j<101;j++)
                {
                    if(part[i]<part[j])
                        Swap(&part[i],&part[j]);
                }
            }
        }
        if(NL)
            printf("\n");
        NL=true;
        for(i=0; i<101; i++)
        {
            if(part[i].penalty>=0)
            {
                printf("%d %d %d\n",part[i].cont,part[i].solve,part[i].penalty);
            }
        }

    }
    return 0;
}
