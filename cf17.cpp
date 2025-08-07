#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int u=0,l=0;
    cin >> s;
    for(char c:s){
        if(isupper(c))
            u++;
        else
            l++;
    }
    if(u>l){
        for(char &c : s)
            c= toupper(c);
    } else{
        for(char &c:s)
            c= tolower(c);
    }
    cout << s << endl;

}