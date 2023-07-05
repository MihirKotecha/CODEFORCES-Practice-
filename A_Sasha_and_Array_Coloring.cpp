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
            int k;
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end(), greater<int>());

        int a = 0;
        int b = n-1;

        int sum = 0;
        while(a<b){
            sum += v[a]-v[b];
            a++;
            b--;
        }

        cout<<sum<<endl;
        
    }
    return 0;
}
