#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int cnt=0;
        int mx=0;
        for(int i=0;i<n;i++){
           cin >> a[i];
           mx=max(mx,a[i]);
        }  
        for(int i=0;i<n;i++){
           if(a[i]==mx)
            cnt++;
           }
        
        cout<< cnt << endl;
    }

}