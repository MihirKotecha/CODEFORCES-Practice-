#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;

    if(n>0){
        cout<<n<<endl;
    }    
    else{
        int y = n/10;
        int z = n%10;
        int m = ((n/100)*10)+z;

        if(y>=m) cout<<y<<endl;
        else cout<<m<<endl;
    }
    return 0;
}
