//121. Best Time to Buy and Sell Stock

#include<iostream>
#include<vector>
using namespace std;

int maxNumber(vector<int>& arr){
    int max = INT32_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int maxNumber2(int* arr, int n){
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int maxProfit(vector<int>& prices) {
    int* hash = new int[prices.size()];
    hash[prices.size()-1] = 0;
    for (int i = prices.size()-2; i >=0 ; i--)
    {
        int oldMax = hash[i+1] + prices[i+1] - prices[i];
        int recent = prices[i+1] - prices[i];
        if(oldMax >= recent){
            hash[i]=oldMax;
        }
        else{
            hash[i]=recent;
        }
    }
    return maxNumber2(hash,prices.size());
}

int main(){
    return 0;
}