#include <iostream>
using namespace std;

int main(){
    
    int arr[100];
    //Guess the number'
    int n,count=-1;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(int i=0;i<100;i++){
        arr[i]=i;
        if(arr[i]==n){
            cout<<"Congrats, you've guess the correct number."<<endl;
            count++;
            break;
        }
        
    }
    if(count<0)
            cout<<"Better luck next time :)"<<endl;
}
