#include <iostream>
using namespace std;
int main(){
    for (int i=0;i<=1000;i++){
        int x=i, cem=0;
        while(x>0){
            int r=x%10;
            cem+=r*r;
            x/=10;
        }
        if (cem==i)
            cout<<i<<" ";
    }
}
