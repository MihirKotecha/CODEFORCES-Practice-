#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }

        int j = 2 * n;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                v[i]++;
                j--;
            }
        }

        int i = 0;

        while (j > 0 && i < n - 1)
        {
            if (v[i] != 1)
            {
                v[i + 1]++;
                j--;
            }
            i++;
        }

        for (auto &it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
