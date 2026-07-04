#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int cnt=0;
    
    if(n==a || n==b || n==c){
        cnt++;
    }
    
    if(n==a+b+c){
        cnt++;
    }
    if(n==a+b){
        cnt++;
    }
    if(n==a+c){
        cnt++;
    }
    if(n==b+c){
        cnt++;
    }

    

    if(cnt>0){
        cout <<cnt;
    }
    else{
        cout <<0 ;
    }
    
}