#include <iostream>
using namespace std;

int decimal(int n){

    int ans=0, pow=1;
    while(n>0){
        int rem = n%10;
        n=n/10;
        ans=(rem*pow);
        pow = pow*2;

    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the binary number to convert"<<endl;
    cin >> n;
    cout << decimal(n)<<endl;


    return 0;
}