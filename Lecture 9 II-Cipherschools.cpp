// Multiple return statements, Actual Parameter, Formal Parameter, Function Prototype

#include <iostream>
using namespace std;

int subtract(int , int);    //function prototype

int compare(int a, int b, int c){   //multiple return statements,   formal parameter
    if(a>b && b>c){return a;}
    else if(b>a && b>c){return b;}
    return c;
}

int main(){
    cout<<compare(10,20,30)<<endl;  //actual parameter
}
