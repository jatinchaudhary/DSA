#include<iostream>
#include<vector>
#include<unordered_map>
#include<utility>
using namespace std;


class TimeMap {
public:
    struct comp_pair_int {
    bool operator()(const pair<int,string> &a, const int & b)
    {
        return (a.first < b);
    }
    bool operator()(const int & a,const pair<int,string> &b)
    {
        return (a < b.first);
    }
};
    unordered_map<string,vector<pair<int,string>>> um;
    TimeMap() { }
    
    void set(string key, string value, int timestamp) {
        um[key].push_back(make_pair(timestamp,value)); 
    }
    
    string get(string key, int timestamp) {
        if(!um.count(key)) return "";
        int i = upper_bound(um[key].begin(),um[key].end(),timestamp,comp_pair_int()) - um[key].begin()-1;
        if(!(i<0 || i>um[key].size()-1)) return um[key][i].second;
        else return "";
    }
};
int main(){

}