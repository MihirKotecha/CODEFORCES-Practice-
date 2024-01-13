#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        bool flag = false;
        for(int i=0;i<n;i++){
            int j;
            cin>>j;
            if(j==k) flag = true;
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
