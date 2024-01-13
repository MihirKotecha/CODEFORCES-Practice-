#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int ans = 0;
        for(int i=0;i<n-1;i++){
            int k;
            cin>>k;
            ans+=k;
        }

        cout<<-ans<<endl;

    }
    return 0;
}
