// 189. Rotate Array

#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int k = k%nums.size();
    int* residue = new int[k];
    for (int i = 0; i < k ; i++)
    {
        residue[i] = nums[nums.size()-k+i];
    }
    
    for (int i = nums.size()-1; i > k-1; i--)
    {
        nums[i]=nums[i-k];
    }
    for (int i = 0; i < k; i++)
    {
        nums[i] = residue[i];
    }
}