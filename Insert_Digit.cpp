#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,a;
        cin>>n>>a;
        string k;
        cin>>k;
        // int max = stoi(k);
        // ll d;
        char x = '0' + a;
        string max = "";
        bool flag = false;
        for(int i=0;i<n;i++){
            int m =  k[i] - '0';
            // cout<<m<<endl;
            if(a>m){
                max = k.substr(0,i) + x + k.substr(i);
                flag = true;
                break;
            }
        }

        if(!flag) cout<<k+x<<endl;
        else cout<<max<<endl;
    }
    return 0;
}
