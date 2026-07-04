#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    int x=a+b*c;
    int y=a*(b+c);
    int z=a*b*c;
    int w=(a+b)*c;
    int r=a+b+c;
    int mx = max(max(max(x, y), max(z, w)), r);
    cout << mx ;
}