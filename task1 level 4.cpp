#include <iostream>
using namespace std;

int main() {
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0)
        c+=i*i;
    }
    cout<<c;
}

  