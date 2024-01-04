#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v;                         
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }

        int ans = INT_MIN;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] - v[i] >= ans)
                ans = v[i + 1] - v[i];
        }

        if (2*(x - v[n-1]) >= ans)
            ans = 2*(x - v[n-1]);
        if (v[0] >= ans)
            ans = v[0];

        cout << ans << endl;
    }
    return 0;
}
