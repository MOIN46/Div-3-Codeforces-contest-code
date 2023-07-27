#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int j, x;
        for (int i = 1; i <= q; i++)
        {
            cin >> j >> x;
            long long int sume = 0, sumo = 0;
            if (j == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (a[i] % 2 == 0)
                    {
                        a[i] = a[i] + x;
                    }
                    sume += a[i];
                }
                cout << sume << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (a[i] % 2)
                    {
                        a[i] = a[i] + x;
                    }
                    sumo += a[i];
                }
                cout << sumo << endl;
            }
        }
    }
    return 0;
}