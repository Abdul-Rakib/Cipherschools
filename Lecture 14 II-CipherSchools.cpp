//calculating maximum and minimum element of an array using pointer.
//pass by address
//returning multiple values using pointer
#include <iostream>
using namespace std;

void minmax(int *arr, int*mean,int*meax){
    *mean=arr[0];
    *meax=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
        *mean=min(arr[i],(*mean));
        *meax=max(arr[i],(*meax));
    }
    cout<<endl;
}


int main() {
	int arr[10],min,max;
	
	minmax(arr,&min,&max);
	cout<<min<<endl<<max;
	return 0;
}
