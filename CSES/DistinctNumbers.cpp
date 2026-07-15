#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt=0;
    vector<int>a(n);
     for(int i=0;i<n;i++){
        cin >> a[i];
     }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]!=a[i-1]){
            cnt++;
        }

    }
    cout << cnt << endl;

}