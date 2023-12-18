#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;

        // reverse(s.begin(),s.end());

        string ans = "";

        int n = s.length();

        int countSmallb = 0;
        int countBigB = 0;

        for (int i = n - 1; i >= 0; i--)
        {

            if (s[i] == 'b')
            {
                countSmallb++;
            }
            else if (s[i] == 'B')
            {
                countBigB++;
            }
            else
            {

                if (islower(s[i]) && countSmallb > 0)
                    countSmallb--;
                else if (isupper(s[i]) && countBigB > 0)
                    countBigB--;
                else ans.push_back(s[i]);
            }
        }

        reverse(ans.begin(), ans.end());

        cout << ans << endl;
    }

    return 0;
}
