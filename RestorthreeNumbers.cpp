#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    vector<int> v;
    for(int i=0;i<4;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    sort(v.begin(),v.end());

    int a = v[3]-v[0];
    int b = v[3]-v[1];
    int c = v[3]-v[2];

    cout<<a<<" "<<b<<" "<<c;
    
    return 0;
}
