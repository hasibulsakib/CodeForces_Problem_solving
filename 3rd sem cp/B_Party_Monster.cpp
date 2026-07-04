// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int cnt=0;
//         int cnt1=0;
       
//         for(int i=0;i<n;i++){
//             if(s[i]==')'){
//                 cnt++;
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(s[i]=='('){
//                 cnt1++;
//             }
//         }
//         if(cnt==cnt1){
//             cout <<"YES" << endl;
//         }
//         else {
//             cout <<"NO" << endl;
//         }
        
        
//     }

// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string str;
        cin >> str;

        stack<char>s;

        bool ok = true;

        for(char c: str){
            if(c=='(')
            s.push(c);
            else {
                if(s.empty()){
                    ok=false;
                    break;
                }
                s.pop();
            }
        }     
        if(!s.empty()) ok=false;
        cout <<(ok?"YES":"NO") << endl;

    }

}