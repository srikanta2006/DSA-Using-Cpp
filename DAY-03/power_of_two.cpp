#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check for power of 2"<<endl;
    int rem;
    cin >> n;
    int temp=n;
    while(n>1){
        if(n%2 != 0){
            cout << temp << " is not a power of 2"<<endl;
            return 0;
        }
        n=n/2;
    }
    cout << temp << " is a power of 2"<<endl;

    return 0;
}