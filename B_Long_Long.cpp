#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll k;
            cin>>k;
            v.push_back(k);
        }
        ll moves = 0;
        ll sum = 0;

        for(ll i=0;i<n;){
            if(v[i]<0){
                while((v[i]<0||v[i]==0)&&i<n){
                    sum = sum -v[i];
                    i++;
                }
                moves++;
            }
            else{
                sum += v[i];
                i++;
            }
        }

        cout<<sum<<" "<<moves<<endl;
    }
    return 0;
}
