#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    if(s.length() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}