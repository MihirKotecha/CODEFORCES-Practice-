#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        
        if((max(a1,b1)==max(a2,b2))&&((min(a1,b1)+min(a2,b2)==max(a1,b1)))){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}