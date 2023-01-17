#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> v;
        if(n%4!=0){
            cout<<"NO";
        }
        else{
            cout<<"YES"<<endl;
            
            for(int i=2;i<=n;){
                v.push_back(i);
                i+=2;
            }
            for(int i=1;i<n;){
                v.push_back(i);
                i+=2;
            }
            v[n-1]+=n/2;
        }
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
