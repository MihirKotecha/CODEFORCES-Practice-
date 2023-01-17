#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n,y;
    cin>>n>>y;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    sort(v.begin(),v.end());

    int ans = 0;

    for(int i=0;i<n;i++){
        if((i+1)%3==0){
            if((v[i]+y)<=5){
                ans++;
            }
        }
    }

    cout<<ans<<endl;
    
    return 0;
}
