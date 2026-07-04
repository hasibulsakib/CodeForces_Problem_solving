#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n;
    cin >> n;
    int a[n];
    int ps=0,ng=0,op=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
           ps++;
        }
        else {
            ng++;
        }
        
    }
    while(ps<ng){
        ng--;
        ps++;
        op++;
    }
    if(ng%2!=0){
        op++;
    }
    cout << op << endl;


}
int main(){
    int t;
    cin >> t;
    while(t--){
        ans();
    }
}