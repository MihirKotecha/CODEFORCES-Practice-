#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    int Sereja = 0;
    int Dima = 0;
    int start = 0;
    int end = n-1;

    int i=1;

    while(start<=end){
        if(i%2!=0){
            if(v[start]>=v[end]){
                Sereja+=v[start];
                start++;
                i++;
            }
            else{
                Sereja+=v[end];
                end--;
                i++;
            }
        }
        else{
            if(v[start]>=v[end]){
                Dima+=v[start];
                start++;
                i++;
            }
            else{
                Dima+=v[end];
                end--;
                i++;
            }
        }
    }

    cout<<Sereja<<" "<<Dima;
    return 0;
}
