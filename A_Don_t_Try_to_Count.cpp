#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,s;
        cin>>n>>s;
        string a,b;
        cin>>a>>b;
        int count = 6;
        int ans = 0;
        bool flag = false;
        while(count--){
            if(a.find(b)!=string::npos){
                flag = true;
                break;
            }
            ans++;
            a+=a;
        }

        if(flag) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
