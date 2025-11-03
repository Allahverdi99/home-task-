#include <iostream>
using namespace std;
int main(){
    for(int i=100;i<=999;i++){
        int a=i/100,b=(i/10)%10,c=i%10;
        if(a+b+c==10)
            cout<<i<<" ";
    }
}
