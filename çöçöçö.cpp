#include <iostream>
using namespace std;
int main(){
    
    int p=100;
    int n=50;
    int d=40;
    int t;

    cout<<"how many premium tickets??"<<endl;
    int pn;
    cin>>pn;

    cout<<"how many normal tickets??"<<endl;
    int nn;
    cin>>nn;

    cout<<"how many discount tickets??"<<endl;
    int dn;
    cin>>dn;

    t= (p*pn) + (n*nn) + (d*dn);
    cout<<t;
}