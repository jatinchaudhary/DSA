#include<iostream>
#include<vector>
using namespace std;


int getTrappedWater(vector<int> input){

int len = input.size(),res = 0;

vector<int> max_prefix(len),max_suffix(len);

int max_value = 0;
for(int i=0;i<len;i++){
   if(input[i]>max_value)
    max_value = input[i];
    max_prefix[i] = max_value;
}

max_value = 0;
for(int i=len-1;i>=0;i--){
   if(input[i]>max_value)
    max_value = input[i];
    max_suffix[i] = max_value;
}


for(int i=0;i<len;i++){
   int temp = min(max_prefix[i],max_suffix[i]);
    if(temp>input[i]){
        res+= temp-input[i];
    }
}

return res;

}


int main(){

    vector<int> inpuut = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout<<getTrappedWater(inpuut);
}