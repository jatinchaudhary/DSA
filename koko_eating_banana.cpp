#include<iostream>
#include<vector>
using namespace std;

int maxPile(vector<int> input){
    int res = 0;
    for(int a : input)
        res = a>res?a:res;
    return res;
}

int calTime(vector<int> input,int rate){

    int res =0;

    for(int i=0;i<input.size();i++){
        int a = input[i]/rate;
        int b = input[i]%rate;
        res+= a;
        res = b!=0?res+1:res;
    }

    return res;
}

int minEatingSpeed(vector<int> input,int target){
    int start = 1;
    int end = maxPile(input);
    int res = 0;
    cout<<"end : "<<end<<"\n";

    while(start<=end){
        int mid = start +(end - start + 1)/2;

        cout<<"mid : "<<mid <<"\n";

        int currTime = calTime(input,mid);

        cout<<"current time : "<<currTime<<"\n";

    if(currTime>target){
            start = mid + 1;
        }
        else{
            res = mid;
            end = mid-1; 
        }
    }
    return res;

}



int main(){
    vector<int> input = {30,11,23,4,20};
    int target = 5;

    cout<<minEatingSpeed(input,target);


}