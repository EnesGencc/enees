#include <iostream>
using namespace std;
int fq(int a);

int main(){

while (true)
{
    cout<<"enter num"<<endl;
    int fk=1;
    int a;
    cin>>a;
    cout<<fq(a)<<endl;
    
}

    return 0;
}

int fq(int a){
    int fk=1;
for (int i = 1; i <= a; i++)
{
    fk=fk*i;
}
return fk;
}