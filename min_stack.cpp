#include<iostream>
#include<stack>
#include<vector>
#include<queue>
using namespace std;

class MinStack {

stack<int> cstack;
vector<int> arr;
int n=0;

//int minVal = INT_MAX;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        cstack.push(val);

        if(n==0){
            arr.push_back(val);
            n+=1;
        }else{
            arr.push_back(min(arr[n-1],val));
            n+=1;
        }
    }
    
    void pop() {
       cstack.pop();
       n-=1;
       arr.pop_back();

    }
    
    int top() {
        return cstack.top();
    }
    
    int getMin() {
        return arr[n-1];
    }
};


int main(){

}