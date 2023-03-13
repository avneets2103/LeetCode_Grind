//238. move all zeroes to end

#include<iostream>
#include<vector>
using namespace std;

void delElement(vector<int>& arr, int in){
    for (int i = in; i < arr.size()-2; i++)
    {
        arr[i]=arr[i+1];
    }
}

void moveZeroes(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==0){
            delElement(nums,i);
            nums[nums.size()-1] = 0;
        }
    }
}

int main(){
    return 0;
}
