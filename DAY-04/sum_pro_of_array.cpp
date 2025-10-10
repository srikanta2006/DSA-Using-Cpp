#include <iostream>
using namespace std;


int main(){
    int arr[5]={1,2,3,4,5};
    int size = 5;
    int sum=0;
    int pro=1;
    for(int i=0; i<size; i++){
        sum+=arr[i];
        pro*=arr[i];
    }
    cout<<"Sum of the elements of the array is: "<<sum<<endl;
    cout << "Product of the elements of the array is: "<<pro << endl;

    return 0;
}