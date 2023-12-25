#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = (a - 1 + b) % n;
    if (ans < 0) ans += n;
    cout << ans + 1 << endl;

    return 0;
}
