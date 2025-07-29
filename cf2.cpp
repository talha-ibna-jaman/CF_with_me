#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d=0;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a+b+c >= 2){
            d++;
        } 
    }cout<<d<<endl;

}