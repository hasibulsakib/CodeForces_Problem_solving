#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,t;
    cin >> n >> t;
    int a[n+1];
    for(int i=1;i<n;i++){
        cin >> a[i];
    }
    int pos=1;
    while(pos < t){
        pos+=a[pos];
    }
    if(pos==t){
        cout <<"YES" << endl;
    }
    else{
        cout <<"NO" << endl;
    }
}