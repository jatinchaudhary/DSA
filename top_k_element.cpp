#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> get_k_element(vector<int>& input,int k){
    unordered_map<int,int> map;

    for(auto i : input){
        if(map.find(i)!=map.end()){
            map[i] = map[i] + 1;
        }else{
            map.insert({i,1});
        }
    }

    vector<int> result;

    for(auto i:map){
        cout<<i.first<<" + "<<i.second<<"\n";
    }

    cout<<"----------------------\n";

    for(auto item : map){

         int key = 0;
         int value = -1;

         cout<<item.first<<" - "<<item.second<<" < \n";
        for(auto i : map){
              cout<<i.first<<" + "<<i.second<<"\n";
            if(i.second>=value){
              key = i.first;
              value = i.second;
            }
        }

        if(value!=-1){
            if(result.size()==k){
                break;
            }
            result.push_back(key);
            map[key] = -1;
        }
    }

    return result;
}




int main(){


    vector<int> input = {3,0,1,0};

    vector<int> res = get_k_element(input,1);

    for(auto i :res){
        cout<<i;
    }
}