#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll a,b;
    cin>>a>>b;

    if(a%2==0){
        if(b>a/2){
            cout<<(b-a/2)*2<<endl;
        }
        else{
            cout<<2*b-1<<endl;
        }
    }
    else{
        if(b>((a/2)+1)){
            cout<<(b-((a/2)+1))*2<<endl;
        }
        else{
            cout<<2*b-1<<endl;
        }

    }
    return 0;
}
