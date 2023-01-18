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
        for(int i=0;i<n;i++){
            int l;
            cin>>l;
            v.push_back(l);
        }

        for(int i=0;i<n;i++){
            if(i==0&&v[i]!=v[i+1]&&v[i]!=v[i+2]){
                cout<<i+1<<endl;
                break;
            }
            else if(i!=0&&v[i]!=v[i-1]){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
