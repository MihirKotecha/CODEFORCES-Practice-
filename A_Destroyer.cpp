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

        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            m[k]++;
        }

        auto it = m.begin();
        bool flag = false;
        while (it != m.end())
        {
            if (it->first != 0)
            {
                // cout<<"HERE"<<endl;
                int l = it->first;
                auto k = m.find(l - 1);
                if (k->second < it->second||k == m.end())
                    flag = true;
            }

            it++;
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
