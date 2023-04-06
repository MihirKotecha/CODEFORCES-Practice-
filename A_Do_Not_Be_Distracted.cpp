#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool flag = false;

        for (int i = 0; i < n-1; i++)
        {
            if (s[i] != s[i + 1])
            {
                if (i + 1 < n - 1)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (s[j] == s[i])
                        {
                            flag = true;
                            break;
                        }
                    }
                }
            }
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
