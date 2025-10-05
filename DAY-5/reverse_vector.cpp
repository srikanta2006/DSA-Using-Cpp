#include<iostream>
#include<vector>
using namespace std;

void reverse_vector(vector<int>& vec){
    int start=0;
    int end=vec.size()-1;
    while(start<end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }

}

int main(){

    vector<int> vec={1,2,3,4,5};
    reverse_vector(vec);

    for(int value : vec){
        cout << value << endl;
    }

    return 0;
}
