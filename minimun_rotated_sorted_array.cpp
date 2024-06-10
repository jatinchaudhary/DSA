#include<iostream>
#include<vector>
using namespace std;


int minimum_element(vector<int> input){
    int start = 0;
    int end = input.size()-1;
    int res = INT_MAX;

    while(start<=end){

        int mid = (start+end)/2;

        if(input[start]<=input[mid]){

            res = min(res,input[start]);
            start = mid+1;
        }
        else{
            res = min(res,input[mid]);
            end  = mid- 1;
        }
    }
return res;
}


int main(){
    vector<int> input;
}