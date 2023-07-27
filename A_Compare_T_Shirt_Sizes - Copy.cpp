#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        string b;
        cin >> a >> b;

        int l1, l2;
        l1 = a.size() - 1;
        l2 = b.size() - 1;

        if (a[l1] == 'S' && b[l2] != 'S')
        {
            cout << "<" << endl;
        }
        else if (a[l1] == 'S' && b[l2] == 'S')
        {
            if (l1 > l2)
            {
                cout << "<" << endl;
            }
            else if (l1 == l2)
            {
                cout << "=" << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
        else if (a[l1] == 'L' && b[l2] != 'L')
        {
            cout << ">" << endl;
        }
        else if (a[l1] == 'L' && b[l2] == 'L')
        {
            if (l1 > l2)
            {
                cout << ">" << endl;
            }
            else if (l1 == l2)
            {
                cout << "=" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
        else if (a[l1] == 'M' && b[l2] == 'S')
        {
            cout << ">" << endl;
        }
        else if (a[l1] ==)
    }
}