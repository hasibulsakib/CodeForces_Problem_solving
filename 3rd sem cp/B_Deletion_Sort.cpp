#include<bits/stdc++.h>
using namespace std;
void answer(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(is_sorted(a.begin(),a.end())){
       cout << n << endl;
    }
    else {
        cout << 1 << endl;
    }
   

}
int main(){
    int t;
    cin >> t;
    while(t--){
        answer();
    }
}