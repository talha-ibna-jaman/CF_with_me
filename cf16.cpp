#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin >> k >> n >> w;
    int s= k*w*(w+1)/2;
    if(s <= n) {
        cout << 0 << endl;
    } else {
        cout << s - n << endl;
    }
}
