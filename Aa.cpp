/**
 *    author:  MOIN46
 **/

#include <bits/stdc++.h>
#define endl "\n"
#define EPS 1E-9
#define PI acos(-1)
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // s.erase(unique(s.begin(), s.end()), s.end);
        int l = s.size();

        int flag = 1, f = 0, k = 0, x = 0, y = 0;

        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'm' || s[i] == 'M')
            {
                f = 1;
                if (k == 1)
                {
                    flag = 0;
                }
            }
            else if (s[i] == 'e' || s[i] == 'E' && f)
            {
                k = 1;
                if (x == 1)
                {
                    flag = 0;
                }
            }
            else if (s[i] == 'o' || s[i] == 'O' && k)
            {
                x = 1;
                if (y == 1)
                {
                    flag = 0;
                }
            }
            else if (s[i] == 'w' || s[i] == 'W' && x)
            {
                y = 1;
            }
            else
            {
                flag = 0;
            }
        }

        if (flag && f && k && x && y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}