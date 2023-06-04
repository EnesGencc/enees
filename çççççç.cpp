#include<iostream>
using namespace std;
int main(){
    cout<<"what do u wanna write"<<endl;
    string a;
    cin>>a;
    cout<<"how many times";
    int s;
    cin>>s;


    for(int i = 1; i<=s; i++){
        cout<<a<<endl;
    }

    return 0;
}