// 392. Is Subsequence

#include<iostream>
#include<vector>
using namespace std;

bool isSubsequence(string s, string t){
    int i=0; 
    int j=0;
    while (t[j] != '\0')
    {
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    if(s[i]=='\0'){
        return true;
    }
    return false;
}