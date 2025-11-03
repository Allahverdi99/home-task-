#include <iostream>
using namespace std;
int main() {
    int n,t = 0,x;
    cin>>n;
    x=n;
    while(x>0){
        t=t*10+x%10;
        x/=10;
    }
    cout<<"Tersi: "<<t<<endl;
    if(t==n){
        cout<<"Beraberdir";
    }else {
        cout<<"Beraber deyil";
    }

