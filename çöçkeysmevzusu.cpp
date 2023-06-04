#include<iostream>
using namespace std;
int main(){
    cout<<"ent n 1"<<endl;
    double a,b;
    cin>>a;
    cout<<"ent n2"<<endl;
    cin>>b;

    char c;
    cin>>c;
    switch (c)
    {
    case '+':
    cout<<a+b<<endl;
        break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
    break;
    case '/':
    cout<<a/b<<endl;
    break;
    default:
    cout<<"no"<<endl;
        break;
    }

return 0;
}
