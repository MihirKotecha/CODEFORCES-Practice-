#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        v.push_back(l);
    }
    int q;
    cin>>q;

    sort(v.begin(),v.end());

    for(int i=0;i<q;i++){
        int m;
        cin>>m;
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;

        while(start<=end){
            if(v[mid]<=m){
                start = mid+1;
            }
         
            else{
                end = mid-1;
            }

            mid = start + (end-start)/2;
        }


        cout<<mid<<endl;
    }
    return 0;
}
