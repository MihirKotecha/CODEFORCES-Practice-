#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string s1 = "yes";

        if(s1.compare(s) == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }
       
    }
     return 0;
    
}

