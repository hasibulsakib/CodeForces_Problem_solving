#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i*i<n;i++){
        if(n%i==0){
           if(i==n/i){
            cnt++;
        }
    }
        else {
            cnt+=2;
        }
    }
    cout << cnt << endl; 
    // if(cnt%2!=0){
    //     cout << "NO" << endl;
    // }
    // else {
    //     cout <<"YES" << endl;
    // }

}