#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        ll ans = 0;
        while(n>0){
            if(n%2==0){
                ans+=n;
                n = n/2;
            }
            else{
                ans+=n;
                n = (n-1)/2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
