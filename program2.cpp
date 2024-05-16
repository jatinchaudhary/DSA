#include<iostream>
#include<string>
#include<vector>

using namespace std;

void rotate(vector<int>& arr,int k){

k = k%arr.size();

if(k!=0){

    arr.insert(arr.begin(),arr.end()-k,arr.end());
    arr.erase(arr.end()-k,arr.end());

}

}





int main(){

vector<int> arr{1,2,3,4,5,6,7,8};
int k = 3;

rotate(arr,k);

for(int x: arr){
    cout<<x;
}

return 1;
}
