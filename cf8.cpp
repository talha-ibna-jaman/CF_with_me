#include<iostream>
using namespace std;
int main(){
    int n,a;
    cin >>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            cout<<"HARD"<<endl;
            return 0;
        }    
    }
    cout<<"EASY"<<endl;
}