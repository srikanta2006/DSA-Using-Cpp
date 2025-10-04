#include<iostream>
#include<climits>
using namespace std;
void swap_min_max(int arr[5], int size){
    int smallest= INT_MAX;
    int largest= INT_MIN;
    int min_index=0, max_index=0;
    for(int i =0; i<size; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            min_index=i;
        }
        else if(arr[i]>largest){
            largest=arr[i];
            max_index=i;
        }
    }
    swap(arr[min_index], arr[max_index]);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    swap_min_max(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}