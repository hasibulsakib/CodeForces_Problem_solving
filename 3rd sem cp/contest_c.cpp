#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >> n;
        long long even=0,odd=0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if (x%2==0){
                even+=x;
            } 
            else {
                odd+=x;
            }
        }
        if (even>odd) {
            cout <<"YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}