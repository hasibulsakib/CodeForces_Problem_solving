#include<bits/stdc++.h>
using namespace std;
void sakib(){
    int n;
    cin >> n;
    // vector<string>s(n);
    // for(int i=0;i<n;i++){
    //     cin >> s[i];
    // }
    string s;
    cin >> s;
    stack<char>st;
    for(char c : s){
        if(!st.empty() && st.top()==c){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    if(st.empty()){
        cout << "YES" << endl;
    }
    else {
        cout <<"NO" << endl;
    }


}
int main(){
    int t;
    cin >> t;
    while(t--){
        sakib();
    }
}