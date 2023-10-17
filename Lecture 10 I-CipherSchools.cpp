#include <iostream>
using namespace std;

void swapping(int a, int b){
    swap(a,b);
    cout<<"After swapping a: "<<a<<" b: "<<b<<endl;
}

int main(){
    
    int a,b;
    a=10;b=20;
    cout<<"Before swapping a: "<<a<<" b: "<<b<<endl;
    swapping(a,b);
}
