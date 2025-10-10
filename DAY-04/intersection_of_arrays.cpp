#include<iostream>
using namespace std;

void print_intersection(int arr_a[10],int arr_b[5], int a, int b){
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            if(arr_a[i]==arr_b[j]){
                cout << arr_a[i]<< " ";
            }
        }
    }
}
int main(){
    int arr_a[10]={1,2,3,4,5,6,7,8,9,10};
    int arr_b[5]={1,2,3,6,8};
    int a=10;
    int b=5;

    print_intersection(arr_a, arr_b, a,b);


    return 0;
}