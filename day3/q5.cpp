//74. search in 2d matrix

#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    bool ans = false;
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        if(matrix[i][n-1] == target){
            return true;
        }
        if(matrix[i][n-1] > target){
            return binarySearch(matrix[i], target);
        }
        else{
            continue;
        }
    }
    return ans;
}

int main(){
    return 0;
}
