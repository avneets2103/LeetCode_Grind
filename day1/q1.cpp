// Duplicates

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int l[n1], m[n2];
    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[start + i];
    }
    for (int j = 0; j < n2; j++)
    {
        m[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while (i < n1 && j < n2)
    {
        if (l[i] < m[j])
        {
            arr[k] = l[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = m[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = l[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = m[j];
        k++;
        j++;
    }
}
void mergesort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

bool containsDuplicate(vector<int> &nums)
{
    mergesort(nums, 0, nums.size() - 1);
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums.at(i) == nums.at(i + 1))
        {
            return true;
        }
    }
    return false;
}

