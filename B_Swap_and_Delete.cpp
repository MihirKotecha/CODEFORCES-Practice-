#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;

        ll n = s.length();

        ll zeros = 0;
        ll ones = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='1') ones++;
            else zeros++;
        }

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(zeros>0){
                    zeros--;
                }
                else{
                    break;
                }
            }
            else{
                if(ones>0){
                    ones--;
                }
                else{
                    break;
                }
            }
        }

        cout<<zeros+ones<<endl;
    }
    return 0;
}
