#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number to check for power of 2"<<endl;
    int rem;
    cin >> n;
    if(n>0 && (n&(n-1))==0){
        cout << n << " is power of 2" << endl;
    }

    else{
        cout << n << " is not a power of 2" << endl;
    }


    return 0;
}