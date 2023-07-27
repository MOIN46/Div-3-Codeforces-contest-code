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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int s=a[0],cnt0=0,e=a[n-1],cntn=0,f=1,ok=0;
        if(s!=e)
        {

            for(int i=0;i<n;i++)
            {
                if(a[i]==s&&f)
                {
                    cnt0++;
                    if(cnt0==k)
                    {
                        f=0;
                    }
                
                    //cout<<a[i]<<" ";
                    
                }
                if(f==0&&a[i]==e)
                {
                    cntn++;
                    if(cntn==k)
                    {
                        ok=1;
                        break;
                    }
                }
            }
        }
        else
        {
            int c=0;
            for(int i=0;i<n;i++)
            {
                if(s==a[i])
                {
                    c++;
                    if(c==k)
                    {
                        ok=1;
                    }
                }
            }
        }

        p(ok);

        cout<<endl;

    }

}