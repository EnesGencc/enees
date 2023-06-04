#include <iostream>
#include <math.h>
using namespace std;

int c(int x, int y);
int a(int x, int y);

int main(){
int x=3;
int y=2;

cout<<"alan =";
cout<<a(x,y);
cout<<" "<<endl;
cout<<"cevre = ";
cout<<c(x,y);


    return 0;
}
int a(int x, int y){
    return x*y;
}
int c(int x, int y){
    return 2*(x+y);
}