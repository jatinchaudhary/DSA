#include<iostream>
#include<vector>
using namespace std;

vector<int> buildArray(vector<int>& nums){

vector<int> res;

for(int i=0;i<nums.size();i++){
res.insert(res.begin() + i,nums[nums[i]]);
}
 
return res;

}



int main(){

vector<int> nums{0,2,1,5,3,4};

vector<int> res = buildArray(nums);

for(int i=0;i<res.size();i++){
    cout<<res[i];
}

return 0;
}