#include<bits/stdc++.h>
using namespace std;
void answer(){
    int n,y;
    int cnt=0;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    set<int> s(a.begin(), a.end());

for(int x : s) {
    y=s.size();
}

for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
    }
   
if(y==1){
    cout <<"YES" << endl;
}
else if(y==2 || n%2==){
    cout << "YES" << endl;
}
else{
    cout <<"NO" << endl;
}
}
int main(){
    int t;
    cin >> t;
    while(t--){
        answer();
    }
}