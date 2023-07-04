#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (c != 1)
        {
            cout << "YES" << endl;
            cout << a << endl;
            while (a != 0)
            {
                cout << 1 << " ";
                a--;
            }
            cout << endl;
        }
        else
        {
            if (b == 1)
                cout << "NO" << endl;
            else if (b == 2)
            {
                if (a % 2 != 0)
                    cout << "NO" << endl;
                else
                {
                    cout << "YES" << endl;

                    cout << a / 2 << endl;
                    while (a != 0)
                    {
                        cout << 2 << " ";
                        a -= 2;
                    }
                    cout << endl;
                }
            }
            else
            {
                if (a % 2 == 0)
                {
                    cout << "YES" << endl;
                    cout << a / 2 << endl;
                    while (a != 0)
                    {
                        cout << 2 << " ";
                        a -= 2;
                    }
                    cout << endl;
                }
                else
                {
                    cout << "YES" << endl;

                    cout << (a / 2) << endl;
                    // else cout<<1<<endl;
                    cout << 3 << " ";
                    a -= 3;
                    while (a != 0)
                    {
                        cout << 2 << " ";
                        a -= 2;
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
