#include <iostream>
using namespace std;
int main () {
  int a;
  int i;
  int q;
  int t=0;
  cin>>a;
  i=a;
  while(a!=0){
      q=a%10;
      t=t*10+q;
      a/=10;
  }
  cout<<t<<endl;
  if (i==t)
   cout<<"polindromdur"<<endl;
  else
  cout<<"polindrom deyil"<<endl;
  return 0;
  
    return 0;
}
  