// 205. Isomorphic Strings

#include<iostream>
#include<vector>
using namespace std;

bool isIsomorphic(string s, string t) {
    int i=0;
    int* hash = new int[256];
    int* consumed = new int[256];
    for (int j = 0; j < 256; j++)
    {
        consumed[j] = 0;
    }
    for (int j = 0; j < 256; j++)
    {
        hash[j] = -1;
    }
    
    while(s[i]!='\0'){
        if(hash[s[i]]==-1 && consumed[t[i]]==0){
            hash[s[i]] = t[i];
            consumed[t[i]]=1;
            i++;
        }
        else if(hash[s[i]]==t[i]){
            i++;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    return 0;
}
