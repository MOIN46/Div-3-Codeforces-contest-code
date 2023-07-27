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
        int ans=0,l=s.size(),i=0;
        char c1,c2,c3;
        if(l>3)
        {
            c1=s[0],c2=s[1],c3=s[2];
            while(i<l)
           {
            
              if(i+3<l&&c1!=c2&&c2!=c3&&c3!=c1)
               {
                ans++;
                 i+=3;
                c1=s[i],c2=s[i+1],c3=s[i+2];
               
               }
               else 
               {
                  while(i+1<l&&c1!=c2)
                  {
                     i++;
                    c2=s[i+1];
                   
                  }

                  while(i+2<l&&c1!=c3)
                {
                    i++;
                    c3=s[i+2];
                    
                }

                while(i+2<l&&c2!=c3)
                {
                    i++;
                    c3=s[i+2];
                    
                }
            }
        }
        cout<<ans<<"\n";
        }
        else
        cout<<"1";
    }

#ifndef ONLINE_JUDGE
    cout << "\nExecution Time : " << 1.0 * clock() / CLOCKS_PER_SEC << "s ";
#endif
}