#include <iostream>
using namespace std;

int tp(int n1, int n2);

int main(){

int a=89;
int b=3;
int r=tp(a,b);
cout<<r;
    return 0;
}
int tp(int n1, int n2){
    int r=n1+n2;
    return r;
}