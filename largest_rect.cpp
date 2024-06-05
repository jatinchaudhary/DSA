#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int area(vector<int> height){


vector<int> leftMax(height.size());
vector<int> rightMax(height.size());

stack<int> stack;

for(int i=0;i<height.size();i++){
    if(stack.empty()){
        leftMax[i] = 0;
        stack.push(i);
    }
    else{
        while( stack.empty()==false  &&  height[stack.top()]>=height[i] ){
            stack.pop();
        }
        if(stack.empty()){
            leftMax[i]=0;
         }
         else{
        leftMax[i]=stack.top()+1;
        }
        stack.push(i);
    }
}


while(!stack.empty()){
    stack.pop();
}

for(int i=height.size()-1;i>=0;i--){
    if(stack.empty()){
        rightMax[i] = height.size()-1;
        stack.push(i);
    }
    else{
        while( stack.empty()==false  &&  height[stack.top()]>=height[i] ){
            stack.pop();
        }
        if(stack.empty()){
            rightMax[i] = height.size()-1;
         }
         else{
        rightMax[i] = stack.top()-1;
        }
        stack.push(i);
    }
}

int maxArea = 0;

for(int i=0 ;i<height.size();i++){
    int curr = height[i] * (rightMax[i] - leftMax[i] + 1);

    if(curr>maxArea){
        maxArea = curr;
    }
}



return maxArea;

}

int main(){

    vector<int> input = {2,1,5,6,2,3};

    cout<<area(input);
}