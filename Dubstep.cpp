#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;

    int n = s.length();
    string ans = "";

    int i = 0;
    while (i < n)
    {
        string k = s.substr(i, 3);
        string m = "WUB";

        if (i == 0 && k.compare(m) == 0)
        {
            while (k.compare(m) == 0 && i < n-2)
            {
                i += 3;
                k = s.substr(i, 3);
            }
        }

        else if (s[i] == 'W')
        {
            if (k.compare(m) == 0)
            {
                s.erase(i, 3);
                n -= 3; // update length of string
                if (i >= n)
                    break; // exit loop if we reach the end
                if (!ans.empty() && ans.back() != ' ')
                    ans += ' ';
                k = s.substr(i, 3); // update substring
            }
            else
            {
                ans += s[i];
                i++;
            }
        }
        else{
            ans += s[i];
            i++; 
        }
    }

    cout << ans << endl;
    return 0;
}
