// 566. Reshape the Matrix
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> turnToMatrix(vector<int> arr, int r, int c){
    vector<vector<int>> mat(r);
    for (int i = 0; i < r; i++)
    {
        vector<int> arr2(c);
        for (int j = 0; j<c; j++)
        {
            arr2[j] = arr[i*c+j];
        }
        mat[i]=arr2;
    }
    return mat;
}

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c){
    int m = mat.size();
    int n = mat[0].size();
    int size = m*n;
    if(m*n != r*c){
        return mat;
    } 
    vector<int> arr(size);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[n*i + j] = mat[i][j];
        }
    }

    return turnToMatrix(arr,r,c);
}

int main()
{
    return 0;
}