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
        int n;
        cin>>n;
        int a[n];
        int tmp[n];
       // map<int,int>mmp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            tmp[i]=a[i];
            //mmp[a[i]]=i+1;
        }

        sort(tmp,tmp+n);
        //map<int ,int>mp;
        bool f=1;

        for(int i=0;i<n;i++)
        {
           // mp[tmp[i]]=i+1;
           if(a[i]%2!=tmp[i]%2)
           {
                f=0;
           }
        }

        p(f);
        cout<<endl;

        // for(auto it=mp.begin(),iit=mmp.begin();it!=mp.end();it++)
        // {
        //     if((iit->first)%2==(it->first)%2&&iit->second==iit->second)
        // }




    }


}