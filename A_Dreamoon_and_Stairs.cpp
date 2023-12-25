#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n, m;
    cin >> n >> m;

    if (m > n)
        cout << -1 << endl;
    else
    {
        int ans = ceil(n / 2.0);
        if (ans % m == 0)
            cout << ans << endl;
        else
        {
            while (ans % m != 0)
            {
                ans++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
