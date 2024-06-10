#include<iostream>
#include<vector>
using namespace std;



int binarySearch(vector<int> input,int start,int end,int element){
int mid = start + ((end - start)/2 );

cout<<mid<<",";
if(input[mid] == element){
    return mid;
}
else if(element>input[mid]){
    return binarySearch(input,mid+1,end,element);
}
else if(element<input[mid]){
    return binarySearch(input,start,mid,element);
}

return -1;
}





int binarySearchNormal(vector<int> input,int target){
    int start = 0;
    int end = input.size()-1;


    while(start<=end){
        int mid = (start+end)/2;

        if(input[mid] == target){
            return mid;
        }
        else if(input[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid +1;
        }
    }

    return -1;
}

int main(){

vector<int> input = {1,3,5,10,15,16,20,25};
cout<<"\n"<<binarySearch(input,0,input.size(),16);
}