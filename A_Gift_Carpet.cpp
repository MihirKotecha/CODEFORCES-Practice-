#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        vector<vector<char>> v;

        for (int i = 0; i < a; i++)
        {
            vector<char> x;
            for (int j = 0; j < b; j++)
            {
                char k;
                cin >> k;
                x.push_back(k);
            }
            v.push_back(x);
        }

        string ans = "";
        if (b < 4)
            cout << "NO" << endl;
        else
        {
            for (int j = 0; j < b; j++)
            {
                for(int i=0;i<a;i++){
                    if(v[i][j]=='v'&&ans.length()==0){
                        ans.push_back('v');
                        break;
                    }
                    else if(v[i][j]=='i'&&ans.length()==1){
                        ans.push_back('i');
                        break;
                    }
                    else if(v[i][j]=='k'&&ans.length()==2){
                        ans.push_back('k');
                        break;
                    }
                      else if(v[i][j]=='a'&&ans.length()==3){
                        ans.push_back('a');
                        break;
                    }
                }
                
            }
            

            if (ans == "vika")
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
                // cout<<ans<<endl;
                
        }
    }
    return 0;
}
