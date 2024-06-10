#include<iostream>
#include<vector>
using namespace std;




int search_element(vector<int> input,int target){
    int start = 0;
    int end = input.size()-1;

    while(start<=end){

        int mid = (start+end)/2;

        if(input[mid]== target){
            return mid;
        }
        else if(input[start]<=input[mid]){

            if(input[start]<=target && input[mid]>=target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        }
        else{

            if(input[mid]<=target && input[end]>=target){
                start = mid+1;
            }
            else{
                end = mid -1;
            }
           
        }
    }
return -1;
}

int main(){

    vector<int> input = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<search_element(input,target);

}