#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0, flagc = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'Y' || s[i] == 'e' || s[i] == 's')
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            if (s[0] == 'e' && s.size() == 1)
            {
                flagc = 1;
            }
            else if (s[0] == 'e' && s[1] == 's' && s.size() == 2)
            {
                flagc = 1;
            }
            else if (s[0] == 'Y' && s[1] == 'e' && s[2] == 's' && s.size() == 3)
            {
                flagc = 1;
            }
            else
            {
                for (int i = 0; i < s.size(); i++)
                {

                    if (s[i] == 'Y' && s[i + 1] == 'E' && s[i + 2] == 'S' || s[i] == 's' && s[i + 1] == 'e' || s[i] == 'Y' && s[i + 1] == 'e' && s[i + 2] == 's' && s[i + 3] == 's')
                    {
                        flagc = 0;
                        break;
                    }
                }
            }
            if (flagc == 0)
            {

                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}