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
        int n,t;
        cin>>n>>t;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        //int q=0;
        int ans=-1;
        int maxi=INT16_MIN;
        for(int i=0;i<n;i++)
        {
            
            if((i+a[i])<=t)
            {

                if(b[i]>maxi)
                {
                    maxi=b[i];
                    ans=i+1;
                }
              
                //break;
            }
            //q++;
        }

        



        cout<<ans<<"\n";
        



    }


}