#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int s= n/5;
    if(n%5 != 0) s++;
    cout << s << endl;
}