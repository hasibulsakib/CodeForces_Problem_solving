#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y;
        bool ok=false;
        for(int i=1;i<=x;i++){
            if(x%i==0){
                if(x/i==y){
                    ok =true;

                }
            }
        }
        if(ok){
            cout << "YES" << endl;

        }
        else{
            cout <<"NO" << endl;
        }
    }
}