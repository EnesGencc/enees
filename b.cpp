#include <iostream>
using namespace std;
int ka(int x){
return x*x;
}

int ku(int x){
return x*(x*x);
}
int main(){

int x;
int y;
while (true)
{
    cin>>x;
cout<<ka(x);
cout<<" "<<endl;
    cout<<ku(x);
    cout<<" "<<endl;
}


    return 0;
}
