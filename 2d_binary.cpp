#include<iostream>
#include<vector>
using namespace std;


bool search(vector<vector<int>> input,int target){

    int start = 0;
    int n = input.size();
    int m = input[0].size();

    int end = 0;

    end = n*m;

    while(start<end){

        int mid = start + (end- start)/2;

        int index1 = mid/m;
        int index2 = mid%m;

        if(input[index1][index2] == target ){

        
            return true;
        }
        else if(input[index1][index2]>target){
            end = mid;
        }
        else{
            start = mid + 1 ;
        }
    }

 return false;

}


int main(){
    bool b = true;

    vector<vector<int>> input = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    cout<<search(input,60);

}