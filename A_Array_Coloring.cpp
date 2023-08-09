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
        while (n--)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int even = 0, odd = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (((v.size() == 2) && (even==odd))||(odd%2!=0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
