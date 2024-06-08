#include<iostream>
#include<vector>
using namespace std;


bool search(vector<vector<int>> input,int target){

    int start = 0;
    int n = input.size();
    int m = input[0].size();

    int end = 0;

    end = m-1;

    while(start<n && end>=0){

        if(input[start][end]==target){
            return true;
        }
        else if(input[start][end]>target){
            end--;
        }
        else{
            start++;
        }
    }

 return false;

}


int main(){
    bool b = true;

    vector<vector<int>> input = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

    cout<<search(input,5);

}