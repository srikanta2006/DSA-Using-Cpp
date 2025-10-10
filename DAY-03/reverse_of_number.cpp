#include<iostream>
using namespace std;

int main(){
    int n;
    int result=0;
    cout <<"Enter the number to reverse"<<endl;
    cin >> n;
    while(n>0){
        int rem = n%10;
        result = result*10+rem;
        n=n/10;
    }
    
    cout << result;


    return 0;
}