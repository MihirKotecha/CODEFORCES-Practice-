#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
        }

        sort(v.begin(),v.end());

        cout<<v[n-1]-v[0]<<endl;
    }
    return 0;
}
