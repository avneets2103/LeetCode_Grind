// 278. First Bad Version

#include <iostream>
#include <vector>
using namespace std;

bool isBadVersion(int version);

int helper(long long int end, long long int start)
{
    long long int index;
    if(start==end){
        index = start;
    }
    if (start < end)
    {
        long long int mid = start + ((end - start) / 2);
        bool midBad = isBadVersion(mid);
        if (midBad)
        {
            if (!isBadVersion(mid - 1))
            {
                index = mid;
            }
            else
            {
                index = helper(mid - 1, start);
            }
        }
        else if (!midBad)
        {
            if (isBadVersion(mid + 1))
            {
                index = mid + 1;
            }
            else
            {
                index = helper(end,mid+1);
            }
        }
    }
    return index;
}

int firstBadVersion(long long int n)
{
    return helper(n, 1);
}

int main()
{
    return 0;
}
