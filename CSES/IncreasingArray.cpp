#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a[n];
    long long ind=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long mx=a[0];
    for(int i=0;i<n;i++){
       if(a[i]<mx){
        
        ind+=mx-a[i];
        a[i]=mx;
       }
       else{
        mx=a[i];
       }
    }
     cout << ind << endl;
}