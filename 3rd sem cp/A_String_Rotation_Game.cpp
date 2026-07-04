#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        // set<char> st;

        // for(char c : s){
        //     st.insert(c);
        // }
        if(s[0]==s[n-1]){
        set<char> st;

        for(char c : s){
            st.insert(c);
        }
       cout << st.size()+1 << endl;
        }
        else {
            cout << n << endl;
        }
    }
}