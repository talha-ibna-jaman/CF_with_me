#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; 
    cin>>s;
    unordered_set<char>st(s.begin(), s.end());
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    } else {
        cout<<"IGNORE HIM!"<<endl;
    }
}