// 167. Two Sum II - Input Array Is Sorted

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> result;
    int i =0;
    int j =numbers.size()-1;
    while(i<=j){
        int ourSum = numbers[i] + numbers[j];
        if(ourSum = target){
            result.push_back(i);
            result.push_back(j);
        }
        else if(ourSum < target){
            i++;
        }
        else{
            j--;
        }
    }
    return result;
}

int main(){
    return 0;
}
