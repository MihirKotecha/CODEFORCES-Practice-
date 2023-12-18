#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll T;
    cin >> T;
    ll totalTime = 0;
    ll currHeight = 0;
    
    while (T--)
    {
        int n;
        cin >> n;
        totalTime+=abs(n-currHeight);
        totalTime += 2;
        currHeight = n;
    }

    cout<<totalTime-1<<endl;
    return 0;
}
