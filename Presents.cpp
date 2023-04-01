#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool compare(const pair<int,int>& a, const pair<int,int>& b) {
    return a.second < b.second;
}


int main(){
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        m[i+1] = k;
    }

    vector<pair<int,int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), compare);



    for(auto &it:v){
        cout<<it.first<<" ";
    }



    return 0;
}
