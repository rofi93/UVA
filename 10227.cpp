/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

#include <bits/stdc++.h>
/* all header files included */

#define mod         1000000007
#define pi          acos(-1.0)
#define eps         1e-9

#define fs          first
#define sc          second
#define pb(a)       push_back(a)
#define mp(a,b)     make_pair(a,b)
#define sp          printf(" ")
#define nl          printf("\n")

#define set0(a)     memset(a,0,sizeof(a))
#define setneg(a)   memset(a,-1,sizeof(a))
#define setinf(a)   memset(a,126,sizeof(a))

#define tc1(x)      printf("Case %d: ",x)
#define tc2(x)      printf("Case #%d: ",x)
#define tc3(x)      printf("Case %d:\n",x)
#define tc4(x)      printf("Case #%d:\n",x)

#define pr1(x)      cout<<x<<"\n"
#define pr2(x,y)    cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)  cout<<x<<" "<<y<<" "<<z<<"\n"
/* defining macros */

#define REP(i, b, n) for (int i = b; i < n; i++)
#define rep(i, n) REP(i, 0, n)

using namespace std;

template <class T> inline T bigmod(T b, T p, T m)
{
    T ret;
    if(p==0) return 1;
    if(p&1)
    {
        ret=(bigmod(b,p/2,m)%m);
        return ((b%m)*ret*ret)%m;
    }
    else
    {
        ret=(bigmod(b,p/2,m)%m);
        return (ret*ret)%m;
    }
}
template <class T> inline T _sqrt(T a)
{
    return (T)sqrt((double)a);
}
template <class T, class X> inline T _pow(T a, X b)
{
    T res=1;
    for(int i=1; i<=b; i++)
        res*=a;
    return res;
}
/* template functions */

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int>pii;
typedef pair<LL, LL>pll;
typedef pair<double, double>pdd;
typedef vector<int>vi;
typedef vector<LL>vll;
typedef vector<double>vd;
/* type definition */

int dx4[]= {1,-1,0,0};
int dy4[]= {0,0,1,-1};
int dx6[]= {0,0,1,-1,0,0};
int dy6[]= {1,-1,0,0,0,0};
int dz6[]= {0,0,0,0,1,-1};
int dx8[]= {1,-1,0,0,-1,1,-1,1};
int dy8[]= {0,0,1,-1,1,1,-1,-1};
int dkx8[]= {-1,1,-1,1,-2,-2,2,2};
int dky8[]= {2,2,-2,-2,1,-1,1,-1};
/* direction array */

int tc=1;
const long long int mx=100000;
/* global declaration */

class UnionFindDisjointSets
{
public:
    UnionFindDisjointSets(int size);
    int findSet(int a);
    bool isSameSet(int a, int b);
    void unionSet(int a, int b);
    int numDisjointSets();
    int sizeOfSet(int a);
    set<int> fallen_trees[100];
    void combine(int P);
private:
    int size;
    vector<int> pset;
    vector<int> set_size;
};

UnionFindDisjointSets::UnionFindDisjointSets(int size)
{
    this->size = size;

    set_size.assign(size, 1);
    pset.assign(size, 0);

    for (int i = 0; i < size; i++)
        pset[i] = i;
}

int UnionFindDisjointSets::findSet(int a)
{
    return pset[a] == a ? a : (pset[a] = findSet(pset[a]));
}

bool UnionFindDisjointSets::isSameSet(int a, int b)
{
    return findSet(a) == findSet(b);
}

void UnionFindDisjointSets::unionSet(int a, int b)
{
    if (isSameSet(a, b)) return;

    size--;
    set_size[findSet(b)] += set_size[findSet(a)];
    pset[findSet(a)] = findSet(b);
}

int UnionFindDisjointSets::numDisjointSets()
{
    return size;
}

int UnionFindDisjointSets::sizeOfSet(int a)
{
    return set_size[findSet(a)];
}

void UnionFindDisjointSets::combine(int P)
{
    rep (i, P)
    {
        REP (j, i+1, P)
        {
            if (!isSameSet(i, j))
            {
                vector<int> diff;
                set_symmetric_difference(fallen_trees[i].begin(), fallen_trees[i].end(), fallen_trees[j].begin(), fallen_trees[j].end(), back_inserter(diff));

                if (diff.empty())
                {
                    unionSet(i, j);
                }
            }
        }
    }
}

int main(void)
{
    int t, person, tree, highest_person_number, P, T;
    cin >> t;
    while (t--)
    {
        cin >> P >> T;
        cin.ignore(100, '\n');

        UnionFindDisjointSets ds(P);

        while (cin.peek() != '\n' && cin.peek() != -1)
        {
            cin >> person >> tree;
            cin.ignore(100, '\n');
            ds.fallen_trees[person-1].insert(tree);
        }
        ds.combine(P);
        pr1(ds.numDisjointSets());
        if(t)
            nl;
    }

    return 0;
}
