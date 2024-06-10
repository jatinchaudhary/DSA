#include<iostream>
#include<vector>
#include<unordered_map>
#include<utility>
using namespace std;


///fix and run

class TimeMap {

    unordered_map<string,vector<pair<int,string>>> data = {};

    int binarySearchNormal(vector<pair<int,string>> input,int target){
    int start = 0;
    int end = input.size()-1;
    int mid = 0;


    while(start<=end){
        mid = (start+end)/2;

    

        if(input[mid].first == target){
            return mid;
        }
        else if(input[mid].first>target){
            end = mid - 1;
        }
        else{
            start = mid +1;
        }
    }

    return mid;

  //  return -1;
}

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        data[key].push_back(make_pair(timestamp,value));
    }
    
    string get(string key, int timestamp) {

        int index = binarySearchNormal(data[key],timestamp);

        return data[key][index].second;
        
    }
};

int main(){

}