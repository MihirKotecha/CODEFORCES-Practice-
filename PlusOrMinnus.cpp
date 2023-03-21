#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,c;
        cin>>a>>b>>c;
        int m = a+b;
        int n = a-b;

        if(m==c) cout<<"+"<<endl;
        else cout<<"-"<<endl;
    }
    return 0;
}
