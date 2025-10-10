#include<iostream>
using namespace std;

int moore(int arr[7], int size){
    int ans=arr[0], freq=1;
    for(int i=1; i<size; i++){
        if(freq==0){
            ans=arr[i];
        }
        if(ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }

    }
    return ans;
}

int main(){

    int arr[7]={2,2,1,1,1,2,2};
    int size=7;
    int ans = moore(arr, size);

    cout << "Majority element in the array is: "<< ans<<endl;


    return 0;
}
