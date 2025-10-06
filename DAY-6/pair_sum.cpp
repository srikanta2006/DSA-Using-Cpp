#include<iostream>
#include<vector>
using namespace std;
vector<int> get_pair(vector<int> nums, int target){
    int i=0, j=nums.size()-1;
    vector<int> result;
    while(i<j){
        int sum = nums[i]+nums[j];
        if(sum==target){
            result.push_back(i);
            result.push_back(j);
            return result;
        }
        else if(sum<target){
            i++;
        }
        else{
            j--;
        }
    }
    return result;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target=13;

    vector<int> ans = get_pair(nums, target);
    for(int ele : ans){
        cout<< ele << " ";
    }
    cout << endl;

    return 0;
}