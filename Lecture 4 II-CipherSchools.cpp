#include <iostream>
using namespace std;

int main(){

  int a=10,b=20,c=30;

  if(a>b && a>c){
    cout<<"A is greater than B and C"<<endl;
}
  else if(b>a && b>c){
    cout<<"B is greater than A and C"<<endl;
}
  else if(c>b && b>c){
    cout<<"C is greater than A and B "<<endl;
}
else{
cout<<"A,B,C are equal"<<endl;

}
