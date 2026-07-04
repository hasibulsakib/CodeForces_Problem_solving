#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       int a,b,n;
       cin >> a >> b >> n;
       int arr[n],sum=0;
       for(int i=0;i<n;i++){
        cin >> arr[i];
       }
       for(int i=0;i<n;i++){
        sum+=arr[i];

       }
       cout << sum << endl;


    }  
}