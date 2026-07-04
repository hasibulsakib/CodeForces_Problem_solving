#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
    int x,y=1;
    cin >> x;
    while(x>0){
      y*=10;
      x/=10;
    }
    cout << y+1 << endl;
   }
}