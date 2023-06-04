#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    srand(time(NULL));
    int n=rand()%100+1;
cout<<n<<endl;

    return 0;
}
