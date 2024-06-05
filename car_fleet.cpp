#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){

    return a.first<b.first?true:false;

}

int carFleet(int target,vector<int> position,vector<int> speed){
    vector<pair<int,int>> data;

    for(int i=0;i<position.size();i++){
        data.push_back({position[i],speed[i]});
    }

    sort(data.begin(),data.end(),compare);

    int fleet = 0;
    float maxTime = 0;
    for(int i=data.size()-1;i>=0;i--){

        float est_time = static_cast<float>(target - data[i].first) / static_cast<float>(data[i].second);

        cout<<est_time<<",";

        if(est_time>maxTime){
            maxTime  = est_time;
            fleet++;
        }


    }
    return fleet;
}

int main(){

  //  cout<<carFleet(12,{10,8,0,5,3},{2,4,1,1,3});
     cout<<carFleet(10,{6,8},{3,2});

}