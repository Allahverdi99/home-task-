#include <iostream>
using namespace std;
int main () {
 int n,a;
 int c=0;
 cin>>n;
 for(int i=1;i<=n;i++){
     cout<<i;
     cin>>a;
     c+=a;
 }
 cout<<c<<endl;
}
  