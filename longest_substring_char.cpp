#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;




int lengthOfLongestSubstring(string input){
  int n = input.size();
  int maxLength = 0;
  int left = 0;
  unordered_map<char,int> charMap;

  for(int right = 0;right<n;right++){

    if(charMap.count(input[right])==0 || charMap[input[right]]<left){

      charMap[input[right]] = right;
      maxLength = max(maxLength,right-left+1);

    }
    else{
      left = charMap[input[right]] + 1;
      charMap[input[right]] = right;
    }
  }

return maxLength;
}




int main(){

string input = "pwwkew";
cout<<lengthOfLongestSubstring(input);
return 0;
}