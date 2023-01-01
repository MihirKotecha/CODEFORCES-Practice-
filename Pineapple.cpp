#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){

    int t,s,x;
    cin>>t>>s>>x;

    double y = abs(((double)x-(double)t)/(double)s);
    double z = abs(((double)x-(double)t-1.0)/(double)s);

    


    if((x==(t+1))||x<t){
        cout<<"NO"<<endl;
    }
    else if(y==(int)y||z==(int)z){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
