#include <iostream>
using namespace std;
int main () {
    int a,t=0,q;
    cin>>a;
    while(a!=0){
        q=a%10;
        t=t*10+q;
        a/=10;
    }
  cout<<t<<endl;
   return 0;
}