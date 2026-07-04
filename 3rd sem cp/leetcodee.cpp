#include<bits/stdc++.h>
using namespace std;

int main() {
    string command;
    cin >> command;

    string ans = "";

    for(int i = 0; i < command.size(); i++) {
        if(command[i] == 'G') {
            ans += 'G';
        }
        else if(command[i] == '(' && command[i+1] == ')') {
            ans += 'o';
            i++;
        }
        else if(command.substr(i,4) == "(al)") {
            ans += "al";
            i += 3;
        }
    }

   cout << '"' << ans << '"' << endl;
}