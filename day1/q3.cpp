// 724. Find Pivot Index

#include <iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        rightSum += nums.at(i);
    }
    if(rightSum == leftSum){
        return 0;
    }
    for (int i = 1; i < nums.size(); i++)
    {
        leftSum += nums.at(i-1);
        rightSum -= nums.at(i);
        if(rightSum == leftSum){
        return i;
        }
    }
}

int main()
{
    return 0;
}
