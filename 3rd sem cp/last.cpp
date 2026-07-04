#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        if(c=='g')
        {
            cout <<0<<  endl;
            continue;
        }
        s+=s;
        vector<int>v;
        for(int i=0;i<2*n;i++)
        {
            if(s[i]=='g')
            {
                v.push_back(i);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
            {
                auto it=lower_bound(v.begin(),v.end(),i);
                ans=max(ans,*it-i);
            }
        }
        cout <<ans<< endl;
    }
}