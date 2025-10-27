#include <iostream>
using namespace std;
int main () {
    int a;
    bool c=true;
    cin>>a;
    if(a<=1)
    c=false;
    else{
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                c=false;
            }
        }
    }
    if(c)
      cout<<"sade";
    else
      cout<<"murekkeb";
   return 0;
}