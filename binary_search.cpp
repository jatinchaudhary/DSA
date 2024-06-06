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

int main(){

vector<int> input = {1,3,5,10,15,16,20,25};
cout<<"\n"<<binarySearch(input,0,input.size(),16);
}