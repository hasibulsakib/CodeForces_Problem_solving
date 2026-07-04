#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
int c=0;
int d=0;
        for(int i=1;i<=n;i++){
           if(a[i]%2==0){
               c++;
           }
        }  
        if(c>1){
           for(int i=1;i<=n;i++){
           if(a[i]%2!=0){
               cout << i << endl;
           } 
        }
    }
        for(int i=1;i<=n;i++){
           if(a[i]%2!=0){
               d++;
           }
        } 
        if(d>1){
           for(int i=1;i<=n;i++){
           if(a[i]%2==0){
               cout << i << endl;
           } 
        }
    }
        
}
   
