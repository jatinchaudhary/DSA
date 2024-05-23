#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> input,int target){
    vector<int> res;

    int start_index = 0,end_index=input.size()-1;

    for(int i=0;i<input.size();i++){

        if(input[start_index]+input[end_index]==target){
              res.push_back(start_index+1);
              res.push_back(end_index+1);
              return res;
        }else if(input[start_index]+input[end_index]>target){
         end_index--;
        }else{
            start_index++;
        }
        
    }
    return res;
}






int main(){

    vector<int> input = {-1,0};
    int target = -1;

    vector<int>  res = twoSum(input,target);
    
    for(auto x:res){
        cout<<x;
    }

}