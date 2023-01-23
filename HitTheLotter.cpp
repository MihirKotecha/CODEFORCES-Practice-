#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;

    int x = 0;
    while (n > 0)
    {
        if (n >= 100)
        {
            n -= 100;
            x++;
        }
        else if (n >= 20)
        {
            n -= 20;
            x++;
        }
        else if (n >= 10)
        {
            n -= 10;
            x++;
        }
        else if (n >= 5)
        {
            n -= 5;
            x++;
        }
        else
        {
            n -= 1;
            x++;
        }
    }
    cout << x << endl;
    return 0;
}
