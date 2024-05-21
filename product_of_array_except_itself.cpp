#include<iostream>
#include<vector>
using namespace std;



vector<int> get_product(vector<int>& input){

vector<int> suffix(input.size()),prefix(input.size()),result;

suffix[0] = 1;
prefix[input.size()-1] = 1;

for(int i=1;i<input.size();i++){
    suffix[i] = suffix[i-1]*input[i-1];
}

for(int i=input.size()-2;i>=0;i--){
    prefix[i] = prefix[i+1]*input[i+1];
}

for(int i=0;i<input.size();i++){
    result.push_back(suffix[i]*prefix[i]);
}

return result;

}


int main(){

vector<int> input = {1,2,3,4};


vector<int> res = get_product(input);

for(auto i : res){
    cout<<i<<",";
}



}