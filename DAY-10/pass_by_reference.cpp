#include<iostream>
using namespace std;

void change_value(int a){
    a = a+10;
}

void change_ref(int* ptr){
    *ptr = *ptr+10;
}
int main(){

    int a=10;
    cout << "Value of variable before changing "<<a<<endl;
    change_value(a);
    cout << "Value of variable after change through pass by value "<< a << endl; 
    change_ref(&a);
    cout << "Value of variable after change through pass by reference "<< a <<endl;
    return 0;
}