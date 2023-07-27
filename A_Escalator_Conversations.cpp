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
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int v=1,cnt=0;
        for(int j=0;j<n;j++)
        {
            for(int i=1;i<=m;i++)
            {
                for(int v=1;v<=m;v++){
                    if((abs(H-a[j])==abs(i-v)*k)&&a[j]!=-1&&v!=i)
                    {
                        cnt++;
                        a[j]=-1;
                    }
                }
            }
        }

        cout<<cnt<<endl;
    }


}