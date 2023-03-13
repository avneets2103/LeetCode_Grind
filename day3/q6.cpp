// 36. Valid Sudoku

#include <iostream>
#include <vector>
using namespace std;

bool sodukoCheck(vector<char> arr){
    bool ans = true;
    vector<int> hash(10,0);

    for (int i = 0; i < 9; i++)
    {
        if(arr[i]=='.'){
            continue;
        }
        
        //1
        if(arr[i]=='1'){
            if(hash[1]==1){
                return false;
            }
            hash[1]++;
        }
        //2
        if(arr[i]=='2'){
            hash[2]++;
            if(hash[2]==2){
                return false;
            }
        }
        if(arr[i]=='3'){
            hash[3]++;
            if(hash[3]==2){
                return false;
            }
        }
        if(arr[i]=='4'){
            hash[4]++;
            if(hash[4]==2){
                return false;
            }
        }
        if(arr[i]=='5'){
            hash[5]++;
            if(hash[5]==2){
                return false;
            }
        }
        if(arr[i]=='6'){
            hash[6]++;
            if(hash[6]==2){
                return false;
            }
        }
        if(arr[i]=='7'){
            hash[7]++;
            if(hash[7]==2){
                return false;
            }
        }
        if(arr[i]=='8'){
            hash[8]++;
            if(hash[8]==2){
                return false;
            }
        }
        if(arr[i]=='9'){
            hash[9]++;
            if(hash[9]==2){
                return false;
            }
        }
    }
    return ans;
}

bool isValidSudoku(vector<vector<char>>& board) {
    bool ans = true;
    // check rows
    for (int i = 0; i < 9; i++)
    {
        ans=ans && sodukoCheck(board[i]);
    }
    //check columns
    vector<char> send(9);
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            send[i]=board[i][j];
        }
        ans = ans && sodukoCheck(send);
    }

    // check blocks
    vector<char> send2(9);
    for (int i = 0; i < 9; i+=3)
    {
        for (int j = 0; j < 9; j+=3)
        {
            send2[0] = board[i][j];
            send2[1] = board[i][j+1];
            send2[2] = board[i][j+2]; 
            send2[3] = board[i+1][j];
            send2[4] = board[i+1][j+1];
            send2[5] = board[i+1][j+2];
            send2[6] = board[i+2][j];
            send2[7] = board[i+2][j+1];
            send2[8] = board[i+2][j+2]; 
            ans = ans && sodukoCheck(send2);
        }
    }

    return ans;
}
int main()
{
    return 0;
}
