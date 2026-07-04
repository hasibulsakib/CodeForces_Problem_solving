#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,x;
        cin >> a >> b >> x;
          long long y1=abs(a-b);
          long long y2=1+abs((a/x)-b);
          long long y3=1+abs((b/x)-a);
          long long y4=2+abs((a/x)-(b/x));
          long long y5 = 2+abs(((b/x)/x)-a);
          long long y6= min({y1,y2,y3,y4,y5}) ;
          cout << y6 << endl;
    }

}