#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());

    if (n % 2 == 0)
    {
        cout << (n / 2) - 1 << endl;
        ll i = 0;
        ll j = n - 1;
        while (j >= i)
        {
            if (j == i)
                cout << v[j] << endl;
            else
                cout << v[j] << " " << v[i] << " ";
            i++;
            j--;
        }
    }
    else
    {
        cout << n / 2 << endl;
        ll i = 0;
        ll j = n - 1;
        while (j >= i)
        {
            if (j == i)
                cout << v[j] << endl;
            else
                cout << v[j] << " " << v[i] << " ";
            i++;
            j--;
        }
    }
    return 0;
}
