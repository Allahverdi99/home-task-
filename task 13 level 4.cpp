#include <iostream>
using namespace std;
int main() {
    int n,t=0,c=0;
    cin>>n;
    int a;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(i%2==0){
         c+=a;
        }
        else {
         t+=a;
        }
    }
    cout<<"Tek indeks cemi="<<t<<"Cut indeks cemi="<<c;
}  
