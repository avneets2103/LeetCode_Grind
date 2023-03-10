// 53. Maximum subarray

#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> &sums, int element){
    for (int i = 0; i < sums.size(); i++)
    {
        if(sums.at(i)==element){
            return true;
        }
    }
    return false;
}

int maxSubArray(vector<int> &nums)
{
    vector<int> sums;
    for (int i = 0; i < nums.size(); i++)
    {
        sums.push_back(nums.at(i));
        for (int j = i+1; j < nums.size(); j++)
        {
            sums.push_back(nums.at(j)+sums.at(sums.size()-1));
        }
    }
    int max = INT16_MIN;
    for (int i = 0; i < sums.size(); i++)
    {
        if(sums.at(i)>max){
            max=sums.at(i);
        }
    }
    return max;    
}