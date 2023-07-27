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

        int l = s.size();

        int f = 0, k = 0, x = 0, y = 0, flag = 1;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'm' || s[i] == 'M' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o' || s[i] == 'O' || s[i] == 'W' || s[i] == 'w')
            {
                if (s[i] == 'm' || s[i] == 'M')
                {
                    f = 1;
                    if (s[i] == 'e' || s[i] == 'E')
                    {
                        k = 1;
                        if (s[i] == 'o' || s[i] == 'O' || x)
                        {
                            x = 1;
                            if (s[i] == 'W' || s[i] == 'w' || y)
                            {
                                y = 1;
                            }
                        }
                        else if (s[i] == 'o' || s[i] == 'O' && y)
                        {
                            flag = 0;
                        }
                    }
                    else if (s[i] == 'e' || s[i] == 'E' && x)
                    {
                        flag = 0;
                    }
                }
                else if (s[i] == 'm' || s[i] == 'M' && k)
                {
                    flag = 0;
                }
            }
            else
            {
                flag = 0;
            }
        }

        if (f && k && x && y && flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}