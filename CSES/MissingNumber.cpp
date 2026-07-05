#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    int sum1=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    int a[n];
    for(int i=1;i<=n-1;i++){
        cin >> a[i];
    }
      for(int i=1;i<=n-1;i++){
        sum1+=a[i];
    }
   
    cout << sum-sum1 ;

}