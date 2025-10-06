#include<iostream>
#include<climits>
using namespace std;

int max_sum(int arr[7], int size){
    int msum = INT_MIN;
    for(int str =0 ; str<size; str++){
        int csum=0;
        for(int end = str; end<size; end++){
            csum+=arr[end];
            msum=max(csum, msum);
        }
    }
    return msum;
}

int main(){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int size = 7;
    int ans = max_sum(arr, size);
    cout << "The max sub array sum of the array is :" << ans << endl;

    return 0;
}