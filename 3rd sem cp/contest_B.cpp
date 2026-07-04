#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
         bool fnd=false;
        for(int i=0;i<n;i++){
             int cnt=0;
            for(int j=0;j<n;j++){
                if(a[i]==a[j]){
                    cnt++;
                }

            }
            bool ok=false;
            for(int k=0;k<i;k++){
                if(a[k]==a[i]){
                    ok=true;
                    break;
                }
            }
            if(!ok && cnt>=3){
            cout << a[i] << endl;
            fnd=true;
            break;
             }
             
            
            
        
        
    }
    if(!fnd){
        cout << -1 << endl;
    }
  }
}