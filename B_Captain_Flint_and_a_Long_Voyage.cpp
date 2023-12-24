#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;

        int k = ceil(n/4.0);


       

        // string ans = "";

        for(int i=0;i<n-k;i++){
            // ans.push_back('9');
            cout<<9;
        }

        for(int i=0;i<k;i++){
            // ans.push_back('8');
            cout<<8;
        }

    //    if(n==1) cout<<8<<endl;
    //    else cout<<endl;

        cout<<endl;
    }
    return 0;
}
