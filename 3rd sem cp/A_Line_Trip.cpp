#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        int n,x,c,d;
        cin >> n >> x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
           cin >> a[i];

        }
        //  sort(a.begin(),a.end());
        int mx=a[0];
        for(int i=1;i<n;i++){
            mx=max(mx,a[i]-a[i-1]);
        }
    //       c=2*(x-a[n-1]);
    //        d=a[0];
    //   cout << max(mx,max(c,d)) << endl;
    if(mx>c && mx > d){
        cout << mx << endl;
    }
    else if(c>mx && d >mx ){
        cout << c << endl;

    }
    else if(mx==c && c==d && mx==d){
        cout << mx << endl;
    }
    else{
        cout << d << endl;
    }
      
    }
}