// 350. Intersection of Two Arrays II
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

int maxElelement(vector<int> &nums1){
    int max = INT16_MIN;
    for (int i = 0; i < nums1.size(); i++)
    {
        if(max<nums1[i]){
            max=nums1[i];
        }
    }
    return max;
}

vector<int> intersect(vector<int> &nums1, vector<int> &nums2){
    vector<int> intersection;
    int* hash1 = new int[maxElelement(nums1)+1];
    int* hash2 = new int[maxElelement(nums2)+1];
    int run = min(maxElelement(nums1)+1,maxElelement(nums2)+1);
    for (int i = 0; i < run; i++)
    {
        hash1[i]=0;
        hash2[i]=0;
    }
    
    // filling hash by nums1
    for (int i = 0; i < nums1.size(); i++)
    {
        hash1[nums1[i]]++;
    }

    // filling hash by nums2
    for (int i = 0; i < nums2.size(); i++)
    {
        hash2[nums2[i]]++;
    }
    
    for (int i = 0; i < run; i++)
    {
        if(hash1[i]>0 && hash2[i]>0){
            for (int j = 0; i < min(hash1[i],hash2[i]); j++)
            {
                intersection.push_back(i);
            }
        }
    }
    return intersection;
}
};
