/**
 *    author:  MOIN46
 *          --MD:MOIN UDDIN BHUYAIN TUHIN
 *          --CSE,BRUR
 *          --Email:cse118199brur@gmail.com
 **/

#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define vec vector<int>
#define sp " "
#define el "\n"
#define SQ(a) a*a
#define EPS 1E-9
#define PI acos(-1)
#define ll long long int
#define loop(i, n) for (int i = 0; i < n; i++)
#define p(condition) cout << (condition ? "YES" : "NO")
#define me ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    me;
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        int a[m];
        pair<int,int>p[n];
        for(int i=0;i<n;i++)
        {
            int t=0,sol=0,pn=0;
            for(int j=0;j<m;j++)
            {
                cin>>a[j];
            }
            sort(a,a+m);
            for(int j=0;j<m;j++)
            {
                t+=a[j];

                if(t<=h)
                {
                sol++;
                pn+=t;
                }

            }
            p[i].first=sol;
            p[i].second=pn;
        }

        int index=p[0].first,in=p[0].second;

        sort(p,p+n);

        for(int i=0;i<n;i++)
        {
            //cout<<p[i].first<<" "<<p[i].second<<endl;
            if(p[i].first==index&&p[i].second==in){
            cout<<n-i<<endl;
            break;
            }
        }
        


    }


}