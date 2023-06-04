#include <iostream>
#include <math.h>
using namespace std;
int main(){

int d[2][3];

d[0][0]=1;
d[0][1]=2;
d[0][2]=3;
d[1][0]=4;
d[1][1]=5;
d[1][2]=6;

for (int i = 0; i < 2; i++)
{

    for (int j = 0; j < 3; j++)
    {
        cout<<d[i][j]<<" ";
        
    }
    cout<<endl;
}


    return 0;
}