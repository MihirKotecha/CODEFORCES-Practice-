#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    while(T--){
        int n,m,x,y,d;

        cin>>n>>m>>x>>y>>d;

        int leftWallDist = abs(y-1);
        int rightWallDist = abs(y-m);
        int topWallDist = abs(x-1);
        int bottomWallDist = abs(n-x);

        if((d>=topWallDist && d>=leftWallDist) || (d>=bottomWallDist&&d>=rightWallDist) ||(d>=bottomWallDist&&d>=topWallDist)||(d>=leftWallDist&&d>=rightWallDist)){
            cout<<-1<<endl;
        }

        else{
            int minDist = abs(n-1)+abs(m-1);
            cout<<minDist<<endl;
        }

    }
    return 0;        
}

