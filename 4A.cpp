/**
 *    author:  MOIN46
 *          --MD:MOIN UDDIN BHUYAIN TUHIN
 *          --CSE,BRUR
 *          --Email:cse118199brur@gmail.com
 **/

#include <bits/stdc++.h>
#define endl "\n"
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
        string s;
        cin>>s;
        int j=5;
        int x=0,y=0;
        for(int i=0;i<3;i++)
        {
            x+=(s[i]-'0');
            y+=(s[j]-'0');
            j--;
        }
        p(x==y);
        cout<<"\n";
    }

#ifndef ONLINE_JUDGE
    cout << "\nExecution Time : " << 1.0 * clock() / CLOCKS_PER_SEC << "s ";
#endif
}