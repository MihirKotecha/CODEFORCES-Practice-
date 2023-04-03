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

        int l = 0;

        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            l = l ^ k;
            v.push_back(k);
        }

        if(n%2!=0){
            cout<<l<<endl;
        }
        else{
            if(l==0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }

    }
    return 0;
}
