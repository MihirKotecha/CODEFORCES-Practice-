#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<string,int> m;

        bool flag = false;

        for(int i=0;i<n-1;i++){
            string k = "";
            k+=s[i];
            k+=s[i+1];

            if(m.find(k)==m.end()){
                m[k] = i;
            }
            else{
                if(m[k]!=i-1){
                    cout<<"YES"<<endl;
                    flag = true;
                    break;
                }
            }
        }

        if(!flag) cout<<"NO"<<endl;
    }
    return 0;
}
