#include<iostream>
using namespace std;

int power(int x, long binaryForm){
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    if(binaryForm==0){
        return 1;
    }
    if(x==-1){
        if(binaryForm%2==0){
            return 1;
        }
        else{
            return -1;
        }
    }
    int ans=1;
    while(binaryForm>0){
        int bit = binaryForm%2;
        if(bit==1){
            ans=ans*x;
        }
        x=x*x;
        binaryForm=binaryForm/2;
    }

    return ans;
}


int main(){

    cout<< "Enter the number to be raised : "<<endl;
    int x;
    cin >> x;
    cout<< "Enter the power: "<<endl;
    int n;
    cin >> n;
    long binaryForm = n;
    if(binaryForm<0){
        x=1/x;
        binaryForm=-binaryForm;
    }
    
    int ans=power(x, binaryForm);
    cout<< ans;

    return 0;
}