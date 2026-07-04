#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int cnt=0;
    int bee=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            bee++;
        }
    }
    
   
    if(bee==0){
        cout <<0<< endl;
    }
    else if(bee%2==0){
        cout << cnt+bee <<endl;
    }
    else {
        cout << cnt+(bee-1) << endl;
    }
}