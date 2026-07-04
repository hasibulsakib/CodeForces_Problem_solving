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
        char a=s[n-1];
        char b=s[n-2];
        if(a==1 && b==0){
            cout << 1 << endl;
        }
        else if(b=='1' && a=='0'){
            cout << 2 << endl;
        }else {
            cout << 1 << endl;
        }
        
    }
    
}