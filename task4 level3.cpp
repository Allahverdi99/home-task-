#include <iostream>
using namespace std;
int main () {
   int a;
   double i=1;
   cin>>a;
   while (a>0){
       i=i*a;
       a--;
   }
   cout<<i;
   return 0;
}