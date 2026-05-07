#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    while(n--){
        string s;
        cin >> s;
 
  bool bee=false;
 
     for(int i = 0; i < s.size()-1; i++){
            if(s[i] == s[i+1]){
               bee=true;
               break;
            }
 
        }
    if(bee){
        cout << 1 << endl;
    }
    else {
        cout << s.size() << endl;
    }
 
    }    
 
}