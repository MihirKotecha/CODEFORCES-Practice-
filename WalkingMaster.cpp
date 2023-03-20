#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(b<d){
            int k = d-b;
            a+=k;
            b+=k;
            // cout<<"HERE"<<endl;
            if(a<c){
                cout<<"-1"<<endl;
            }
            else if(a>c){
                cout<<k+(a-c)<<endl;
            }
            else{
                cout<<k<<endl;
            }
        }

        else if(b==d){
            if(c==a) cout<<0<<endl;
            else if(c<a) cout<<a-c<<endl;
            else cout<<-1<<endl;
        }

        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
