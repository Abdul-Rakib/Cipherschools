//print array element using pointers

#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int *ptr;
    ptr=arr;
    
    for(int i=0;i<10;i++){
        cin>>arr[i];
        cout<<*ptr<<endl;    //printingt he elements with pointer
        ptr++; //incrementing pointing address. pointer points to the address of next element.
    }
}
