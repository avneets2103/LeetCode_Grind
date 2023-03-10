// 88. Merging 2 sorted arrays

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> final;
    int i = 0; // for nums1
    int j = 0; // for nums2

    while (i < m && j < n)
    {
        if (nums1.at(i) < nums2.at(j))
        {
            final.push_back(nums1.at(i));
            i++;
        }
        else if (nums1.at(i) > nums2.at(j))
        {
            final.push_back(nums2.at(j));
            j++;
        }
        else
        {
            final.push_back(nums1.at(i));
            i++;
            final.push_back(nums2.at(j));
            j++;
        }
    }

    if (i == m && j == n)
    {
        nums1 = final;
        return;
    }

    if (i == m)
    {
        while (j < n)
        {
            final.push_back(nums2.at(j));
            j++;
        }
        nums1 = final;
        return;
    }

    else if (j == n)
    {
        while (i < m)
        {
            final.push_back(nums1.at(i));
            i++;
        }
        nums1 = final;
        return;
    }

    nums1 = final;
    return;
}

int main()
{
    return 0;
}
