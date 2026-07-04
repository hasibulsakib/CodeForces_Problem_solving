#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string s1="hello";
    int k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==s1[k]){
            k++;
        }
    }
    if(k==5){
        cout <<"YES" << endl;
        
        }
        else {
            cout <<"NO" << endl;
        }
        
   

    
}