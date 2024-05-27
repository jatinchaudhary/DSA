#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;


/// two pointer approach

vector<vector<int>> threeSum2(vector<int> input){

    vector<vector<int>> res;
    sort(input.begin(),input.end());
    for(int i=0;i<input.size();i++){
        if(i>0&& input[i-1]==input[i]){
            continue;
        }

        int j = i+1,k = input.size()-1;

        while(j<k){

            if(input[i]+input[j]+input[k]<0){
                j++;
              

            }
            else if(input[i] + input[j] + input[k] > 0){
                k--;
              
            }
            else{
                res.push_back({input[i],input[j],input[k]});
                j++;
                k--;
                while(input[j-1]==input[j] && j<k) j++;
                while(input[k+1] == input[k] && j<k) k--;
            }
        }

    }
    return res;
}





/// hashmap approach

vector<vector<int>> threeSum(vector<int> input){

set<vector<int>> res;

for(int i=0;i<input.size();i++){

    unordered_map<int,int> hash;

    for(int j=i+1;j<input.size();j++){
        int target = -(input[i] +input[j]);
        if(hash.find(target)!=hash.end()){
            vector<int> temp = {input[i],input[j],target};
            sort(temp.begin(),temp.end());
            res.insert(temp);
        }
        hash.insert({input[j],j});
    } 
}

return vector<vector<int>>(res.begin(),res.end());

}




int main(){

    vector<int> input = {-1,0,1,2,-1,-4};

    vector<vector<int>> res = threeSum2(input);

    for(int i=0;i<res.size();i++){
        for(auto x:res[i]){
            cout<<x<<",";
        }
        cout<<"\n";
    }
}