#include <iostream>
using namespace std;
int main () {
  int i=0;
  int a,b,c;
  cin>>a;
  if(a<0)
    a=-a;
  while(a!=0){
      b=a%10;
      c+=b;
      a/=10;
  }
  cout <<c<<endl;
   return 0;
}