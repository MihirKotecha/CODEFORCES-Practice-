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

        set<string> k;

        for(int i=0;i<n-1;i++){
            string c = "";
            c+=s[i];
            c+=s[i+1];
            k.insert(c);
        }

        cout<<k.size()<<endl;
    }
    return 0;
}
