#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=1000;i++){
        int x=i,t=0;
        while (x>0){
            t=t*10+x%10;
            x/=10;
        }
        if (t==i)
            cout<<i<<" ";
    }
}