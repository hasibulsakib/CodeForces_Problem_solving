#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,a,b;
        cin >> n >> a >> b;
        int c = n / 3;
        int d = n % 3;

        cout << min({(c + 1) * b, c * b + d * a, n * a}) << endl;
      
    }
}