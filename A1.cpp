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
        int flag = 0;
        if (s.size() == 1)
        {
            if (s[0] == 'Y')
            {
                cout << "YES" << endl;
            }
            else if (s[0] == 'e')
            {
                cout << "YES" << endl;
            }
            else if (s[0] == 's')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            for (int i = 0; i < s.size() - 1;)
            {
                if (s[i] == 'Y')
                {
                    if (s[i + 1] == 'e')
                    {
                        i++;
                        flag = 1;
                    }
                    else
                    {
                        flag = 0;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else if (s[i] == 'e')
                {
                    if (s[i + 1] == 's')
                    {
                        i++;
                        flag = 1;
                    }
                    else
                    {
                        flag = 0;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else if (s[i] == 's')
                {
                    if (s[i + 1] == 'Y')
                    {
                        i++;
                        flag = 1;
                    }
                    else
                    {
                        flag = 0;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else
                {
                    flag = 0;
                    cout << "NO" << endl;
                    break;
                }
            }

            if (flag == 1)
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}