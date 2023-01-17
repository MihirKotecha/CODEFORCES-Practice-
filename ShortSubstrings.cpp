#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    
    int T;
    cin>>T;

    while(T--){
        string s;
        cin>>s;
        string ans;
        for(int i=0;i<s.length();i++){
            if((i+1)%2!=0||i==s.length()-1){
                ans.push_back(s[i]);
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
