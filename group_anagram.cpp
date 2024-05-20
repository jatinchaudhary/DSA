#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;



 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }
        
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }

vector<vector<string>> get_group_anagram(vector<string> input){



    unordered_map<string,vector<int>> map = {};

    for(int index=0;index<input.size();index++){
        
        string temp = input[index];

        sort(temp.begin(),temp.end());

        if(map.find(temp)!=map.end()){
            vector<int> temp_list;
            temp_list = map[temp];
            temp_list.push_back(index);
            map[temp] = temp_list;
        }
        else{
            map.insert({temp,{index}});
        }
         
    }

    vector<vector<string>> result;
 
    for(auto i=map.begin();i!=map.end();i++){
         vector<string> temp;
         for(auto index = i->second.begin();index!=i->second.end();index++){
            temp.push_back(input[*index]);
         }
         if(temp.size()!=0){
            result.push_back(temp);
         }
    }

    return result;
}






int main(){

vector<string> input = {"eat","tea","tan","ate","nat","bat"};

vector<vector<string>> result = get_group_anagram(input);

cout<<"\n";
for(auto i = result.begin();i!=result.end();i++){

//cout<<(*i)[0];
 for(auto j=(*i).begin();j!=(*i).end();j++){
    cout<<*j<<" ";
 }
 cout<<"\n";
}


}
