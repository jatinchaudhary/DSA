#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


bool cal_distinct(vector<int>& input){

unordered_map<int,int> distinct_elements = {};

for(int index = 0;index<input.size();index++){
    distinct_elements.insert({input[index],1});
}

return (distinct_elements.size()==input.size())?false:true;


}

int main(){

    vector<int> input = {1,2,3,4,3,5};

    cout<<cal_distinct(input);

}