#include<iostream>
#include<vector>
using namespace std;



/// 2 pointer approach

int getMostWater2(vector<int> input){

int i=0, j = input.size()-1;
int maxw = 0;


while(i<j){
 int curr = min(input[i],input[j])*(j-i);

        if(curr>maxw){
            maxw = curr;
        }

    if(input[i]<input[j]){
        i++;
    }
    else
    j--;
}


return maxw;
}




/// brute frce approach 

int getMostWater(vector<int> input){

int res = 0,n = input.size();
int maxw = 0;

for(int i=0;i<n;i++){

    for(int j = n-1;j>i;j--){

        int curr = min(input[i],input[j])*(j-i);

        if(curr>maxw){
            maxw = curr;
        }
    }
}

return maxw;
}


int main(){

    vector<int> input = {1,8,6,2,5,4,8,3,7};

    cout<<getMostWater2(input);
}