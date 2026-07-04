#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    string s;
    cin >> s;
    set<char>sa;
    for(int i=0;i<n;i++){
        char c=tolower(s[i]);
        if(c>='a' && c <= 'z'){
            sa.insert(c);
        }
    }
    if(sa.size()==26){
        cout <<"YES" << endl;
    }
    else {
        cout <<"NO" << endl;
    }

}