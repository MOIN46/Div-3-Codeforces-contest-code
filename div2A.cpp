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
       ll n,k;
       cin>>n>>k;
       //int f=1;
       if(((n%k)%2==0)||((n%2)%k==0)||(n%k==0)||(n%2==0)||(n-k)%2==0||(n-2)%k==0)
       {
        cout<<"YES\n";
       }
       else
       cout<<"NO\n";
       
       
       //cout<<"\n";
    }

#ifndef ONLINE_JUDGE
    cout << "\nExecution Time : " << 1.0 * clock() / CLOCKS_PER_SEC << "s ";
#endif
}