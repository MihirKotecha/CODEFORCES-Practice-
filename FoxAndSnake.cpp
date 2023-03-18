#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n,m;
    cin>>n>>m;
    int count = 0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<'#';
            }
            cout<<endl;
             count++; 
        }
        else{
            for(int j=0;j<m;j++){ 
               
                if(count%2!=0){
                    if(j==m-1) cout<<'#';
                    else cout<<".";   
                }
                else{
                    if(j==0) cout<<'#';
                    else cout<<".";
                }
                 
            }
            cout<<endl;
        }
       
    }
    return 0;   
}