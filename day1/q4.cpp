// 704. binary search

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target, int start, int end)
{
    if(start==end){
        if(target==nums.at(start)){
            return start;
        }
        else{
            return -1;
        }
    }
    if (start < end)
    {
        int mid = start + ((end - start)/2);
        if (nums.at(mid) == target)
        {
            return mid;
        }
        else if (nums.at(mid) >= target)
        {
            return binarySearch(nums, target, start, mid - 1);
        }
        else
        {
            return binarySearch(nums, target, mid + 1, end);
        }
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    return binarySearch(nums,target,0,nums.size()-1);
}

int main()
{
    return 0;
}
