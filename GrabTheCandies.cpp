#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;

        int odd=0;
        int evens = 0;

        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            if(k%2==0) evens += k;
            else odd+=k;
        }

        if(evens>odd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
