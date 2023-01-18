#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    sort(v.begin(),v.end());

    int ans = 0;

    for(int i=0;i<n-1;i++){
        ans+=v[n-1]-v[i];
    }

    cout<<ans<<endl;
    return 0;
}
