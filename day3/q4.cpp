// 118. Pascal's Triangle

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows){
    int no = 1;
    vector<vector<int>> pascal(numRows);
    for (int i = 0; i < numRows; i++)
    {
        vector<int> line(no);
        for (int j = 0; j < no; j++)
        {
            if(j==0 || j==no-1){
                line[j]=0;
                continue;
            }
            line[j] = pascal[i-1][j-1]+pascal[i-1][j];
        }
        pascal[i]=line;
        no++;
    }
    return pascal;
}

int main(){
    return 0;
}
