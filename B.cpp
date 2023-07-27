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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int a[26] = {0};
        int A[26] = {0};
        int tempa[26] = {0};

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                a[s[i] - 'a']++;
            if (s[i] >= 'A' && s[i] <= 'Z')
                A[s[i] - 'A']++;
        }

        int count = 0;

        for (int i = 0; i < 26; i++)
        {
            tempa[i] = a[i];
            count += min(A[i], a[i]);
            a[i] -= min(A[i], a[i]);
            A[i] -= min(tempa[i], A[i]);
        }

        for (int i = 0; i < 26; i++)
        {
            int sum = (a[i] + A[i]);
            sum = sum / 2;

            count += min(sum, k);

            k -= min(sum, k);
            if (k == 0)
            {
                break;
            }
        }

        cout << count << "\n";
    }
}