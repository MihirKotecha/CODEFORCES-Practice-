#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;

    int i = 0;

    while (i < s.length())
    {
        if (s[i] == '.')
        {
            cout << "0";
            i++;
        }
        else
        {
            if (s[i + 1] == '.')
            {
                cout << "1";
                i += 2;
            }
            else
            {
                cout << '2';
                i += 2;
            }
        }
    }

    return 0;
}
