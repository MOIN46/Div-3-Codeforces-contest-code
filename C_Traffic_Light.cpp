#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string c;
        string s, r;

        cin >> c;
        cin >> s;
        r = s + s;

        int max = 0, count = 0;

        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == c[0])
            {
                for (int j = i + 1; j < 2 * n; j++)
                {
                    count++;
                    if (r[j] == 'g')
                    {
                        break;
                    }
                }
                if (max < count)
                {
                    max = count;
                    count = 0;
                }
                count = 0;
            }
        }
        if (n > 1)
            cout << max + 1 << endl;
        else
            cout << max << endl;
    }
    return 0;
}