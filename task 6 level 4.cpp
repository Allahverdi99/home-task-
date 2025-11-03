#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,max,min;
    double sum=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(i==1)max=min=a;
        if(a>max)max=a;
        if(a<min)min=a;
        sum+=a;
    }
    cout<<"Max="<<max<<"Min="<<min<<"Orta="<<sum<<endl;
}