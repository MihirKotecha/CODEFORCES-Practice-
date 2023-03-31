#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v;

        string s = to_string(n);
        int k=0;
        for(int i=0;i<s.length();i++){
            if(s[i] != '0'){
                k++;
                int m=i;
                string k = "";
                k += s[i];
                while(m+1<s.length()){
                    k+='0';
                    m++;
                }
                v.push_back(k);
            }
        }

        cout<<k<<endl;

        // v[v.size()-1]  =  v[v.size()-1].substr(0, v[v.size()-1].length()-1);

        for(auto it:v){
            cout<<it<<" ";
        }

        cout<<endl;

    }
    return 0;
}
