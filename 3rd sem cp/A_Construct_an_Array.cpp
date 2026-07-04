#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a;
        for(int i=0;i<n;i++){
            a.push_back(2*i+1);
        }
        for(int i=0;i<a.size();i++){
            cout << a[i] <<" ";
        }
        cout << endl;
    }
    
}