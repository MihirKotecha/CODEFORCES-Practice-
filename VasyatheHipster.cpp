#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int a,b;
    cin>>a>>b;

    if(a>b){
        a-=b;
        cout<<b<<" ";
        cout<<a/2<<endl;
    }
    else{
        b-=a;
        cout<<a<<" ";
        cout<<b/2<<endl;
    }
    return 0;
}
